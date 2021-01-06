/*
 * @Author: Darcy 
 * @Date: 2020-12-24 21:38:42 
 * @Last Modified by: Darcy
 * @Last Modified time: 2021-01-06 17:26:38
 */
#include <stdio.h>
#include <string.h>


int main(void)
{
   _Bool a[7][100];
   int k;
   scanf("%d", &k);

   for (int i = 0; i < k; i++)
   {
      memset(a, 0, sizeof(a));
      int x;
      int turn;
      int record;
      int number;
      scanf("%d", &x);
      record = x;
      while (x != 0)
      {
         if (1000 <= x && x <= 9999)
         {
            turn = 4;
            number = x % 10;
            x /= 10;
         }
         else if (100 <= x && x <= 999)
         {
            turn = 3;
            number = x % 10;
            x /= 10;
         }
         else if (10 <= x && x <= 99)
         {
            turn = 2;
            number = x % 10;
            x /= 10;
         }
         else
         {
            turn = 1;
            number = x;
            x = 0;
         }

         turn = (turn - 1) * 7 + 1;
         if (number == 0)
         {
            a[0][turn - 1] = 1; a[0][turn] = 1; a[0][turn + 1] = 1; a[0][turn + 2] = 1; a[0][turn + 3] = 1; 
            a[1][turn - 1] = 1; a[1][turn] = 0; a[1][turn + 1] = 0; a[1][turn + 2] = 0; a[1][turn + 3] = 1; 
            a[2][turn - 1] = 1; a[2][turn] = 0; a[2][turn + 1] = 0; a[2][turn + 2] = 0; a[2][turn + 3] = 1; 
            a[3][turn - 1] = 1; a[3][turn] = 0; a[3][turn + 1] = 0; a[3][turn + 2] = 0; a[3][turn + 3] = 1; 
            a[4][turn - 1] = 1; a[4][turn] = 0; a[4][turn + 1] = 0; a[4][turn + 2] = 0; a[4][turn + 3] = 1; 
            a[5][turn - 1] = 1; a[5][turn] = 0; a[5][turn + 1] = 0; a[5][turn + 2] = 0; a[5][turn + 3] = 1; 
            a[6][turn - 1] = 1; a[6][turn] = 1; a[6][turn + 1] = 1; a[6][turn + 2] = 1; a[6][turn + 3] = 1; 
         }
         else if (number == 1)
         {
            a[0][turn - 1] = 0; a[0][turn] = 0; a[0][turn + 1] = 0; a[0][turn + 2] = 0; a[0][turn + 3] = 1; 
            a[1][turn - 1] = 0; a[1][turn] = 0; a[1][turn + 1] = 0; a[1][turn + 2] = 0; a[1][turn + 3] = 1; 
            a[2][turn - 1] = 0; a[2][turn] = 0; a[2][turn + 1] = 0; a[2][turn + 2] = 0; a[2][turn + 3] = 1; 
            a[3][turn - 1] = 0; a[3][turn] = 0; a[3][turn + 1] = 0; a[3][turn + 2] = 0; a[3][turn + 3] = 1; 
            a[4][turn - 1] = 0; a[4][turn] = 0; a[4][turn + 1] = 0; a[4][turn + 2] = 0; a[4][turn + 3] = 1; 
            a[5][turn - 1] = 0; a[5][turn] = 0; a[5][turn + 1] = 0; a[5][turn + 2] = 0; a[5][turn + 3] = 1; 
            a[6][turn - 1] = 0; a[6][turn] = 0; a[6][turn + 1] = 0; a[6][turn + 2] = 0; a[6][turn + 3] = 1; 
         }
         else if (number == 2)
         {
            a[0][turn - 1] = 1; a[0][turn] = 1; a[0][turn + 1] = 1; a[0][turn + 2] = 1; a[0][turn + 3] = 1; 
            a[1][turn - 1] = 0; a[1][turn] = 0; a[1][turn + 1] = 0; a[1][turn + 2] = 0; a[1][turn + 3] = 1; 
            a[2][turn - 1] = 0; a[2][turn] = 0; a[2][turn + 1] = 0; a[2][turn + 2] = 0; a[2][turn + 3] = 1; 
            a[3][turn - 1] = 1; a[3][turn] = 1; a[3][turn + 1] = 1; a[3][turn + 2] = 1; a[3][turn + 3] = 1; 
            a[4][turn - 1] = 1; a[4][turn] = 0; a[4][turn + 1] = 0; a[4][turn + 2] = 0; a[4][turn + 3] = 0; 
            a[5][turn - 1] = 1; a[5][turn] = 0; a[5][turn + 1] = 0; a[5][turn + 2] = 0; a[5][turn + 3] = 0; 
            a[6][turn - 1] = 1; a[6][turn] = 1; a[6][turn + 1] = 1; a[6][turn + 2] = 1; a[6][turn + 3] = 1; 
         }
         else if (number == 3)
         {
            a[0][turn - 1] = 1; a[0][turn] = 1; a[0][turn + 1] = 1; a[0][turn + 2] = 1; a[0][turn + 3] = 1; 
            a[1][turn - 1] = 0; a[1][turn] = 0; a[1][turn + 1] = 0; a[1][turn + 2] = 0; a[1][turn + 3] = 1; 
            a[2][turn - 1] = 0; a[2][turn] = 0; a[2][turn + 1] = 0; a[2][turn + 2] = 0; a[2][turn + 3] = 1; 
            a[3][turn - 1] = 1; a[3][turn] = 1; a[3][turn + 1] = 1; a[3][turn + 2] = 1; a[3][turn + 3] = 1; 
            a[4][turn - 1] = 0; a[4][turn] = 0; a[4][turn + 1] = 0; a[4][turn + 2] = 0; a[4][turn + 3] = 1; 
            a[5][turn - 1] = 0; a[5][turn] = 0; a[5][turn + 1] = 0; a[5][turn + 2] = 0; a[5][turn + 3] = 1; 
            a[6][turn - 1] = 1; a[6][turn] = 1; a[6][turn + 1] = 1; a[6][turn + 2] = 1; a[6][turn + 3] = 1; 
         }
         else if (number == 4)
         {
            a[0][turn - 1] = 1; a[0][turn] = 0; a[0][turn + 1] = 0; a[0][turn + 2] = 0; a[0][turn + 3] = 1; 
            a[1][turn - 1] = 1; a[1][turn] = 0; a[1][turn + 1] = 0; a[1][turn + 2] = 0; a[1][turn + 3] = 1; 
            a[2][turn - 1] = 1; a[2][turn] = 0; a[2][turn + 1] = 0; a[2][turn + 2] = 0; a[2][turn + 3] = 1; 
            a[3][turn - 1] = 1; a[3][turn] = 1; a[3][turn + 1] = 1; a[3][turn + 2] = 1; a[3][turn + 3] = 1; 
            a[4][turn - 1] = 0; a[4][turn] = 0; a[4][turn + 1] = 0; a[4][turn + 2] = 0; a[4][turn + 3] = 1; 
            a[5][turn - 1] = 0; a[5][turn] = 0; a[5][turn + 1] = 0; a[5][turn + 2] = 0; a[5][turn + 3] = 1; 
            a[6][turn - 1] = 0; a[6][turn] = 0; a[6][turn + 1] = 0; a[6][turn + 2] = 0; a[6][turn + 3] = 1; 
         }
         else if (number == 5)
         {
            a[0][turn - 1] = 1; a[0][turn] = 1; a[0][turn + 1] = 1; a[0][turn + 2] = 1; a[0][turn + 3] = 1; 
            a[1][turn - 1] = 1; a[1][turn] = 0; a[1][turn + 1] = 0; a[1][turn + 2] = 0; a[1][turn + 3] = 0; 
            a[2][turn - 1] = 1; a[2][turn] = 0; a[2][turn + 1] = 0; a[2][turn + 2] = 0; a[2][turn + 3] = 0; 
            a[3][turn - 1] = 1; a[3][turn] = 1; a[3][turn + 1] = 1; a[3][turn + 2] = 1; a[3][turn + 3] = 1; 
            a[4][turn - 1] = 0; a[4][turn] = 0; a[4][turn + 1] = 0; a[4][turn + 2] = 0; a[4][turn + 3] = 1; 
            a[5][turn - 1] = 0; a[5][turn] = 0; a[5][turn + 1] = 0; a[5][turn + 2] = 0; a[5][turn + 3] = 1; 
            a[6][turn - 1] = 1; a[6][turn] = 1; a[6][turn + 1] = 1; a[6][turn + 2] = 1; a[6][turn + 3] = 1; 
         }
         else if (number == 6)
         {
            a[0][turn - 1] = 1; a[0][turn] = 1; a[0][turn + 1] = 1; a[0][turn + 2] = 1; a[0][turn + 3] = 1; 
            a[1][turn - 1] = 1; a[1][turn] = 0; a[1][turn + 1] = 0; a[1][turn + 2] = 0; a[1][turn + 3] = 0; 
            a[2][turn - 1] = 1; a[2][turn] = 0; a[2][turn + 1] = 0; a[2][turn + 2] = 0; a[2][turn + 3] = 0; 
            a[3][turn - 1] = 1; a[3][turn] = 1; a[3][turn + 1] = 1; a[3][turn + 2] = 1; a[3][turn + 3] = 1; 
            a[4][turn - 1] = 1; a[4][turn] = 0; a[4][turn + 1] = 0; a[4][turn + 2] = 0; a[4][turn + 3] = 1; 
            a[5][turn - 1] = 1; a[5][turn] = 0; a[5][turn + 1] = 0; a[5][turn + 2] = 0; a[5][turn + 3] = 1; 
            a[6][turn - 1] = 1; a[6][turn] = 1; a[6][turn + 1] = 1; a[6][turn + 2] = 1; a[6][turn + 3] = 1; 
         }
         else if (number == 7)
         {
            a[0][turn - 1] = 1; a[0][turn] = 1; a[0][turn + 1] = 1; a[0][turn + 2] = 1; a[0][turn + 3] = 1; 
            a[1][turn - 1] = 0; a[1][turn] = 0; a[1][turn + 1] = 0; a[1][turn + 2] = 0; a[1][turn + 3] = 1; 
            a[2][turn - 1] = 0; a[2][turn] = 0; a[2][turn + 1] = 0; a[2][turn + 2] = 0; a[2][turn + 3] = 1; 
            a[3][turn - 1] = 0; a[3][turn] = 0; a[3][turn + 1] = 0; a[3][turn + 2] = 0; a[3][turn + 3] = 1; 
            a[4][turn - 1] = 0; a[4][turn] = 0; a[4][turn + 1] = 0; a[4][turn + 2] = 0; a[4][turn + 3] = 1; 
            a[5][turn - 1] = 0; a[5][turn] = 0; a[5][turn + 1] = 0; a[5][turn + 2] = 0; a[5][turn + 3] = 1; 
            a[6][turn - 1] = 0; a[6][turn] = 0; a[6][turn + 1] = 0; a[6][turn + 2] = 0; a[6][turn + 3] = 1; 
         }
         else if (number == 8)
         {
            a[0][turn - 1] = 1; a[0][turn] = 1; a[0][turn + 1] = 1; a[0][turn + 2] = 1; a[0][turn + 3] = 1; 
            a[1][turn - 1] = 1; a[1][turn] = 0; a[1][turn + 1] = 0; a[1][turn + 2] = 0; a[1][turn + 3] = 1; 
            a[2][turn - 1] = 1; a[2][turn] = 0; a[2][turn + 1] = 0; a[2][turn + 2] = 0; a[2][turn + 3] = 1; 
            a[3][turn - 1] = 1; a[3][turn] = 1; a[3][turn + 1] = 1; a[3][turn + 2] = 1; a[3][turn + 3] = 1; 
            a[4][turn - 1] = 1; a[4][turn] = 0; a[4][turn + 1] = 0; a[4][turn + 2] = 0; a[4][turn + 3] = 1; 
            a[5][turn - 1] = 1; a[5][turn] = 0; a[5][turn + 1] = 0; a[5][turn + 2] = 0; a[5][turn + 3] = 1; 
            a[6][turn - 1] = 1; a[6][turn] = 1; a[6][turn + 1] = 1; a[6][turn + 2] = 1; a[6][turn + 3] = 1; 
         }
         else if (number == 9)
         {
            a[0][turn - 1] = 1; a[0][turn] = 1; a[0][turn + 1] = 1; a[0][turn + 2] = 1; a[0][turn + 3] = 1; 
            a[1][turn - 1] = 1; a[1][turn] = 0; a[1][turn + 1] = 0; a[1][turn + 2] = 0; a[1][turn + 3] = 1; 
            a[2][turn - 1] = 1; a[2][turn] = 0; a[2][turn + 1] = 0; a[2][turn + 2] = 0; a[2][turn + 3] = 1; 
            a[3][turn - 1] = 1; a[3][turn] = 1; a[3][turn + 1] = 1; a[3][turn + 2] = 1; a[3][turn + 3] = 1; 
            a[4][turn - 1] = 0; a[4][turn] = 0; a[4][turn + 1] = 0; a[4][turn + 2] = 0; a[4][turn + 3] = 1; 
            a[5][turn - 1] = 0; a[5][turn] = 0; a[5][turn + 1] = 0; a[5][turn + 2] = 0; a[5][turn + 3] = 1; 
            a[6][turn - 1] = 1; a[6][turn] = 1; a[6][turn + 1] = 1; a[6][turn + 2] = 1; a[6][turn + 3] = 1; 
         }
      }

      printf("%d:\n", record);

      for (int s = 0; s < 7; s++)
      {
         for (int y = 0; y < 100; y++)
         {
            if (a[s][y])
               printf("*");
               else
                  printf(" ");
         }
         printf("\n");
      }
   }
   return 0;
}

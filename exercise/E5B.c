/*
 * @Author: Darcy 
 * @Date: 2020-12-22 23:36:50 
 * @Last Modified by: Darcy 
 * @Last Modified time: 2020-12-22 23:36:50 
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
   _Bool prime(int a);
   int k;
   int number;
   int count = 0;
   int factor[100];

   scanf("%d", &k);
   memset(factor, 0, sizeof(factor));

   for (int i = 0; i < k; i++)
   {
      count = 0;
      scanf("%d", &number);
      for (int x = 2; x <= number; x++)
      {
         if (number == 1)
            break;
         if (prime(x) && number % x == 0)
         {
            factor[count++] = x;
            number /= x;
            x--;
         }
      }
      for (int s = 0; s < count; s++)
      {
         printf("%d", factor[s]);
         if (s < count - 1)
            printf("*");
            else
               printf("\n");
      }
   }

   return 0;
}

_Bool prime(int a)
{
   for (int s = 2; s * s <= a; s++)
   {
      if (a % s == 0)
         return 0;
   }
   return 1;
}
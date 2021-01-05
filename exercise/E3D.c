/*
 * @Author: Darcy 
 * @Date: 2020-12-21 18:47:49 
 * @Last Modified by: Darcy
 * @Last Modified time: 2020-12-21 18:48:21
 */
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
   int top, bottom;
   int m, i;
   int count;
   char temp;

   char symbol[100];
   int value[100];

   top    = 0;
   bottom = 0;
   m      = 0;
   i      = 0;
   count  = 0;
   temp   = '\0';

   memset(symbol, 0, sizeof(symbol));
   memset(value, 0, sizeof(value));

   (void) scanf("%d", &m);

   for (i = 0; i < m; i++)
   {
      scanf("%d", &value[i]);
      if ((temp = getchar()) != ' ' && temp != '\n')
         symbol[i] = temp;
         else
            symbol[i] = '+';
   }

   for (i = 0; i < m; i++) 
   {
      if (value[i] > top)
         top = value[i];
      if (value[i] < bottom)
         bottom = value[i];
   }

   count = top;

   if (top < 0)
      count = 0;

   for (; count >= bottom; count--)
   {
      for (i = 0; i < m; i++)
      {
         if (count > 0)
         {
            if (value[i] >= count)
               printf("%c", symbol[i]);
               else
                  printf(" ");
            
            if (i < m - 1)
               printf(" ");
         }

         if (count == 0)
         {
            if (i < m - 1)
               printf("--");
               else
                  printf("-");
         }

         if (count < 0)
         {
            if (value[i] <= count)
               printf("%c", symbol[i]);
               else
                  printf(" ");

            if (i < m - 1)
               printf(" ");
         }

      }

      printf("\n");
   }

   return 0;
}
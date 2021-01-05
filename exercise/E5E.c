/*
 * @Author: Darcy
 * @Date: 2020-12-24 21:47:29
 * @Last Modified by: Darcy
 * @Last Modified time: 2020-12-24 21:47:29
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
   int m, n;
   int count = 0;
   int digit[1000];
   _Bool t = 1;

   (void)scanf("%d%d", &m, &n);

   for (int i = 0; i < m; i++)
      scanf("%d", &digit[count++]);
   for (int i = 0; i < n; i++)
      scanf("%d", &digit[count++]);

   while (t)
   {
      t = 0;
      int temp;
      for (int i = 0; i < count - 1; i++)
      {
         if (digit[i] > digit[i + 1])
         {
            t      = 1;
            temp   = digit[i];
            digit[i]     = digit[i + 1];
            digit[i + 1] = temp;
         }
      }
   }

   for (int i = 0; i < count; i++)
   {
      printf("%d", digit[i]);
      if (i < count - 1)
         printf(" ");
      else
         printf("\n");
   }

   return 0;
}
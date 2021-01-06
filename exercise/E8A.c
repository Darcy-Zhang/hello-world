/*
 * @Author: Darcy 
 * @Date: 2021-01-06 16:55:55 
 * @Last Modified by: Darcy
 * @Last Modified time: 2021-01-06 17:03:01
 */
#include <math.h>
#include <stdio.h>

int main(void)
{
   int n, i, x;

   n = 0;
   i = 0;
   x = 0;

   (void)scanf("%d", &n);

   for (i = 0; i < n; i++)
   {
      (void)scanf("%d", &x);
      if (x >= 0)
         printf("%.2f\n", sqrt((double)x));
      else
         printf("ERROR\n");
   }

   return 0;
}

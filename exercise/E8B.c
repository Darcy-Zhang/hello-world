/*
 * @Author: Darcy 
 * @Date: 2021-01-06 17:20:46 
 * @Last Modified by: Darcy
 * @Last Modified time: 2021-01-06 17:21:16
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
   int n, m, i, x;
   int count;
   int sort[100], all[200];

   n = 0;
   m = 0;
   i = 0;
   x = 0;
   count = 0;
   memset(sort, 0, sizeof(sort));
   memset(all, 0, sizeof(all));

   (void)scanf("%d", &n);

   for (i = 0; i < n; i++)
   {
      memset(sort, 0, sizeof(sort));
      memset(all, 0, sizeof(all));
      m = 0;
      x = 0;
      count = 0;

      (void)scanf("%d", &m);

      for (x = 0; x < m; x++)
         scanf("%d", &all[x]);

      for (x = 0; x < m; x++)
      {
         if (count == 0)
         {
            sort[0] = all[x];
            count++;
         }
         else if (count == 1)
         {
            if (all[x] < sort[0])
            {
               sort[1] = sort[0];
               sort[0] = all[x];
               count++;
            }
            
            if (all[x] > sort[0])
            {
               sort[1] = all[x];
               count++;
            }
         }
         else if (count == 2)
         {
            if (all[x] < sort[0])
            {
               sort[1] = sort[0];
               sort[0] = all[x];
            }
            if (all[x] > sort[0] && all[x] < sort[1])
               sort[1] = all[x];
         }
      }

      if (count < 2)
         printf("ERROR\n");
      else
         printf("%d\n", sort[1]);
   }

   return 0;
}
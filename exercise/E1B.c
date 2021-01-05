#include <stdio.h>

int main(void)
{
   int a[10];
   int i;
   int c1, c2, c3;

   while(scanf("%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4]) != EOF)
   {
      if(a[0] == 0 && a[1] == 0 && a[2] == 0 && a[3] == 0 && a[4] == 0)
         break;

      c1 = 1;
      c2 = 1;
      c3 = 1;
      for (i = 4; i > 1; i--)
      {
         if(a[i] + a[i-2] != 2 * a[i-1])
            c1 = 0;
         if(a[i] * a[i-2] != a[i-1] * a[i-1] || a[i] == 0 || a[i-1] == 0 || a[i-2] == 0)
            c2 = 0;
         if(a[i] != a[i-1] + a[i-2])
            c3 = 0;
      }

      if(c1 == 1)
      {
         printf("case one\n");
         for(i = 5; i < 10; i++)
         {
            a[i] = a[i-1] * 2 - a[i-2];
            printf("%d", a[i]);
            if(i < 9)
               printf(" ");
            else
               printf("\n");
         }
      }

      if(c2 == 1)
      {
         printf("case two\n");
         for(i = 5; i < 10; i++)
         {
            a[i] = a[i-1] * a[i-1] / a[i-2];
            printf("%d", a[i]);
            if(i < 9)
               printf(" ");
            else
               printf("\n");
         }
      }

      if(c3 == 1)
      {
         printf("case three\n");
         for(i = 5; i < 10; i++)
         {
            a[i] = a[i-1] + a[i-2];
            printf("%d", a[i]);
            if(i < 9)
               printf(" ");
            else
               printf("\n");
         }
      }
   }

   return 0;
}

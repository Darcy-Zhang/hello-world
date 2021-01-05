#include <stdio.h>

int main(void)
{
   int i, n, x, y;
   char temp;
   char a[1000][100];

   for (i = 0; i < 1000; i++)
   {
      for (n = 0; n < 100; n++)
      {
         a[i][n] = 0;
      }
   }

   scanf("%d", &i);
   getchar();

   for (x = 0; x < i; x++)
   {
      n = 0;
      while ((temp = getchar()) != '\n')
      {
         a[x][n] = temp;
         n = n + 1;
      }

      y = 0;
      while (a[x][y] == 'A')
         y = y + 1;

      if (a[x][y] == 'S' && a[x][y+1] == 'C' && a[x][y+2] == 'U')
         y = y + 3;
      else
      {
         printf("NO\n");
         continue;
      }

      while (a[x][y] == 'A')
         y = y + 1;

      if (a[x][y] == 0)
         printf("YES\n");
      else
      {
         printf("NO\n");
         continue;
      }

   }

   return 0;
}

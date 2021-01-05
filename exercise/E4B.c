#include <stdio.h>
#include <string.h>

int main(void)
{
   _Bool NarcissisticNumber(int a);
   int t;

   scanf("%d", &t);

   for (int i = 0; i < t; i++)
   {
      int number[1000];
      int m, n;
      int count;
      count = 0;
      memset(number, 0, sizeof(number));
      scanf("%d%d", &m, &n);
      for (int x = m; x <= n; x++)
      {
         if (NarcissisticNumber(x))
            number[count++] = x;
      }

      if (count == 0)
         printf("-1\n");
         else
         {
            for (int x = 0; x < count; x++)
            {
               printf("%d", number[x]);
               if (x < count - 1)
                  printf(" ");
                  else
                     printf("\n");
            }
         }
   }

   return 0;
}

_Bool NarcissisticNumber(int a)
{
   int cube(int a);
   int b = a;
   int sum = 0;
   for (int i = 0; i < a; i++)
   {
      sum += cube(b % 10);
      b /= 10;
      if (b == 0)
         break;
   }

   if (sum == a)
      return 1;
      else
         return 0;
}

int cube(int a)
{
   return a * a * a;
}
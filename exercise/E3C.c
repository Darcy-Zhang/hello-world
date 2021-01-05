#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
   bool check(int a);
   int n, i;
   int count;
   int s[1000], l[1000];
   n     = 0;
   i     = 0;
   count = 0;

   memset(s, 0, sizeof(s));
   memset(l, 0, sizeof(l));

   (void)scanf("%d", &n);

   if (n % 2 != 0 || n <= 6)
   {
      printf("ERROR\n");
      return 0;
   }

   for (i = 3; i * 2 <= n; i = i + 2)
   {
      if (check(i) && check(n-i))
      {
         s[count] = i;
         l[count] = n - i;
         count++;
      }
   }

   for (i = 0; i < count; i++)
      printf("%d %d\n", s[i], l[i]);

   return 0;
}

bool check(int a)
{
   bool t = 1;

   for (int m = 2; m * m <= a; m++)
      if (((a / m) * m) == a)
         t = 0;
   
   if (t)
      return 1;
      else
         return 0;         
}
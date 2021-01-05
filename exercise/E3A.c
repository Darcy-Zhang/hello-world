#include <stdio.h>

int main(void)
{
   int n, i;
   int a, b, c;

   (void) scanf("%d", &n);

   for (i = 0; i < n; i++)
   {
      (void) scanf("%d%d%d", &a, &b, &c);
      if (a <= 0 || b <= 0 || c <= 0)
      {
         printf("No\n");
         continue;
      }
      if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) printf("Yes\n");
      else printf("No\n");
   }

   return 0;
}

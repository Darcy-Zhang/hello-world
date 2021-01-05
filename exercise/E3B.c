#include <stdio.h>
#include <string.h>

int main(void)
{
   int i, n;
   int a[100], b[100];
   int maxx, maxn;

   memset(a, 0, sizeof(a));
   memset(a, 0, sizeof(b));

   (void) scanf("%d", &n);

   for (i = 0; i < n; i++) (void) scanf("%d", &a[i]);
   for (i = 0; i < n; i++) if (a[i] < 0) b[i] = -a[i]; else b[i] = a[i];

   maxx = 0;
   maxn = 0;

   for (i = 0; i < n; i++)
      if (maxx < b[i])
      {
         maxx = b[i];
         maxn = i;
      }

   printf("%d\n", a[maxn]);

   return 0;
}

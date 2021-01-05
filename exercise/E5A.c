#include <stdio.h>
#include <string.h>

int main(void)
{
   char a[100], b[100];
   int n = 0, i = 0, x = 0;
   int status = 1;
   int len = 0;

   (void) scanf("%d", &n);

   for (i = 0; i < n; i++)
   {
      status = 1;
      memset(a, 0, sizeof(a));
      memset(b, 0, sizeof(b));
      (void) scanf("%s", a);

      len = strlen(a);
      for (x = 0; x < len; x++) b[x] = a[len-x-1];
      for (x = 0; x < len; x++) if (a[x] != b[x]) status = 0;

      if ((_Bool)status) printf("yes\n");
      else printf("no\n");
   }

   return 0;
}
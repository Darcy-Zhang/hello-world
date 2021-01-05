#include <stdio.h>
#include <string.h>

int main(void)
{
   int process(int a[], int w);
   int w, n;
   int i, x, y;
   int input[1000];
   int output[1000];
   int middle[100];

   w = 0;
   n = 0;
   i = 0;
   x = 0;
   y = 0;
   memset(input, 0, sizeof(input));
   memset(output, 0, sizeof(output));
   memset(middle, 0, sizeof(middle));

   while (scanf("%d%d", &w, &n) != EOF)
   {
      memset(input, 0, sizeof(input));
      memset(output, 0, sizeof(output));
      memset(middle, 0, sizeof(middle));
      for (i = 0; i < n; i++)
         scanf("%d", &input[i]);
      for (i = 0; i < n; i++)
         output[i] = input[i];
      for (i = w / 2; i < n - w / 2; i++)
      {
         y = 0;
         memset(middle, 0, sizeof(middle));
         for (x = i - w / 2; x <= i + w / 2; x++)
            middle[y++] = input[x];
         output[i] = process(middle, w);
      }
      if (w % 2 == 0)
      {
         printf("ERROR\n");
         continue;
      }

      for (i = 0; i < n; i++)
      {
         printf("%d", output[i]);
         if (i < n - 1)
            printf(" ");
         else
            printf("\n");
      }
   }

   return 0;
}

int process(int a[], int w)
{
   int s;
   _Bool t;
   int temp;
   t = 1;
   while (t)
   {
      t = 0;
      for (s = 0; s < w; s++)
      {
         if (a[s] < a[s + 1])
         {
            temp = a[s];
            a[s] = a[s + 1];
            a[s + 1] = temp;
            t = 1;
         }
      }
   }

   return a[w / 2];
}
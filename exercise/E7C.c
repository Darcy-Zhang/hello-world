#include <stdio.h>
#include <string.h>

int main(void)
{
   long int A[100][100];
   long int answer[100][100];
   long int temp[100][100];
   int n, k, i, x, s, p;

   n = 0;
   k = 0;
   i = 0;
   x = 0;
   s = 0;
   p = 0;
   memset(A, 0, sizeof(A));
   memset(answer, 0, sizeof(answer));

   (void)scanf("%d%d", &n, &k);

   for (i = 1; i <= n; i++)
      for (x = 1; x <= n; x++)
      {
         scanf("%ld", &A[i][x]);
         answer[i][x] = A[i][x];
      }

   for (s = 1; s < k; s++)
   {
      memset(temp, 0, sizeof(temp));
      for (i = 1; i <= n; i++)
         for (x = 1; x <= n; x++)
            for (p = 1; p <= n; p++)
               temp[i][x] += answer[i][p] * A[p][x];

      for (i = 1; i <= n; i++)
         for (x = 1; x <= n; x++)
            answer[i][x] = temp[i][x];
   }
   for (i = 1; i <= n; i++)
   {
      for (x = 1; x <= n; x++)
      {
         printf("%ld", answer[i][x]);
         if (x < n)
            printf(" ");
            else
               printf("\n");
      }
   }

   return 0;
}
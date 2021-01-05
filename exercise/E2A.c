#include <stdio.h>
#include <string.h>

int result[2000];

void math(char a[], char b[], int s)
{
   int e = (int)strlen(a);
   int f = (int)strlen(b);
   int z = 0, w = 0;
   int bitA, bitB, bitC, bitD;
   char A[1000], B[1000], C[1000], D[1000];
   memset(A, 0, sizeof(A));
   memset(B, 0, sizeof(B));
   memset(C, 0, sizeof(C));
   memset(D, 0, sizeof(D));

   bitA = e / 2;
   bitB = e - bitA;
   bitC = f / 2;
   bitD = f - bitC;

   for (z = 0; z < bitA; z++) A[z] = a[z];
   w = bitA;
   for (z = 0; z < bitB; z++) B[z] = a[w++];
   for (z = 0; z < bitC; z++) C[z] = b[z];
   w = bitC;
   for (z = 0; z < bitD; z++) D[z] = b[w++];

   if (e == 1 && f == 1)
   {
      result[s] += (a[0] - '0') * (b[0] - '0');
      return ;
   } 
   if (e > 1 && f == 1) 
   {
      math(A, b, bitB + s);
      math(B, b, s);
   }
   if (e == 1 && f > 1)
   {
      math(a, C, bitD + s);
      math(a, D, s);
   }
   if (e > 1 && f > 1)
   {
      math(A, C, bitB + bitD + s);
      math(A, D, bitB + s);
      math(B, C, bitD + s);
      math(B, D, s);
   }
}

int main(void)
{
   int i = 0, n = 0, x = 0;
   int number = 0;
   char a[2000], b[2000];
   int out[2000];

   (void) scanf("%d", &n);

   for (i = 0; i < n; i++)
   {
      memset(result, 0, sizeof(result));
      memset(out, 0, sizeof(out));	
      memset(a, 0, sizeof(a));
      memset(b, 0, sizeof(b));

      (void) scanf("%s%s", a, b);

      if (a[0] == '0' || b[0] == '0')
      {
         printf("0\n");
         continue;
      }
      int lena = strlen(a);
      int lenb = strlen(b);
      int check = lena + lenb - 1;
      math(a, b, 0);

      number = result[0];
      for (x = 0; x <= check; x++)
      {
         out[x] = number % 10;
         number = (number / 10) + result[x+1];
      }
      if (out[check] == 0) check--;

      for (x = check; x >= 0; x--) printf("%d", out[x]);
      putchar('\n');
   }

   return 0;
}


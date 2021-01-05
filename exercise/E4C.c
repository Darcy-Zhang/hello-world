/*
 * @Author: Darcy 
 * @Date: 2020-12-22 16:50:39 
 * @Last Modified by: Darcy 
 * @Last Modified time: 2020-12-22 16:50:39 
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
   void sort(int a[], int x);
   int convert(char a[]);
   int n;
   scanf("%d", &n);
   (void)getchar();

   for (int i = 0; i < n; i++)
   {
      char digit[1000][1000];
      int x, y;
      int number[1000];
      _Bool status = 0;
      char temp = '\0';
      x = 0;
      y = 0;

      memset(digit, 0, sizeof(digit));
      memset(number, 0, sizeof(number));
      while((temp = getchar()) != '\n')
      {
         if (status)
         {
            if (temp != ' ')
            {
               digit[x][y] = temp;
               y++;
            }
            else
            {
               status = 0;
               x++;
               y = 0;
            }
         }
         else
         {
            if (temp != ' ')
            {
               status = 1;
               digit[x][y] = temp;
               y++;
            }
         }
      }
      x++;

      for (int s = 0; s < x; s++)
      {
         number[s] = convert(digit[s]);
      }

      sort(number, x);

      for (int s = 0; s < x; s++)
      {
         printf("%d", number[s]);
         if (s < x - 1)
            printf(" ");
            else
               printf("\n");
      }
      
   }

   return 0;
}

int convert(char a[])
{
   size_t len = strlen(a);
   int sum = 0;
   if (a[0] <= '9' && '0' <= a[0])
   {
      for (int i = 0; i < (int)len; i++)
      {
         sum = sum * 10 + (int)a[i] - '0';
      }

      return sum;
   }
   else
   {
      for (int i = 1; i < (int)len; i++)
      {
         sum = sum * 10 + (int)a[i] - '0';
      }

      return -sum;
   }
}

void sort(int a[], int x)
{
   int temp;

   _Bool t = 1;
   while (t)
   {
      t = 0;
      for (int i = 0; i < x - 1; i++)
      {
         if (a[i] % 2 == 0 && a[i+1] % 2 == 1)
         {
            t = 1;
            temp     = a[i];
            a[i]     = a[i + 1];
            a[i + 1] = temp;
         }
         else if (a[i] % 2 == 0 && a[i+1] % 2 == 0 && a[i] > a[i+1])
         {
            t = 1;
            temp     = a[i];
            a[i]     = a[i + 1];
            a[i + 1] = temp;
         }
         else if (a[i] % 2 == 1 && a[i+1] % 2 == 1 && a[i] > a[i+1])
         {
            t = 1;
            temp        = a[i];
            a[i]     = a[i + 1];
            a[i + 1] = temp;
         }
      }
   }
}
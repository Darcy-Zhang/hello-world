/*
 * @Author: Darcy
 * @Date: 2020-12-25 22:06:43
 * @Last Modified by: Darcy
 * @Last Modified time: 2020-12-25 22:40:54
 */
#include <stdio.h>
#include <string.h>

char sort[1000][1000];
int sum[1000];
int len = 0;

int main(void)
{
   int check(char a);
   void reverse(char a[]);
   int status = -1;
   int count = 0;
   int x, y;
   char temp = '\0';
   char all[10000];
   char word[1000][1000];
   _Bool letter[1000];


   x = -1;
   y = 0;
   memset(all, 0, sizeof(all));
   memset(word, 0, sizeof(word));
   memset(letter, 0, sizeof(letter));
   memset(sum, 0, sizeof(sum));
   memset(sort, 0, sizeof(sort));

   while ((temp = getchar()) != EOF)
      all[count++] = temp;

   for (int i = 0; i < count; i++)
   {
      if (check(all[i]) != status)
      {
         x++;
         y = 0;
         status = check(all[i]);
         word[x][y] = all[i];
      }
      else
      {
         y++;
         word[x][y] = all[i];
      }
   }

   x++;

   for (int i = 0; i < x; i++)
      reverse(word[i]);

   int maxp = 0;
   int maxn = 0;
   for (int i = 0; i < len; i++)
   {
      if (sum[i] > maxn)
      {
         maxp = i;
         maxn = sum[i];
      }
      else if (sum[i] == maxn)
      {
         if (strcmp(sort[i], sort[maxp]) > 0)
            maxp = i;
      }
   }

   printf("%s %d\n", sort[maxp], sum[maxp]);

   return 0;
}

int check(char a)
{
   if (a <= 'z' && a >= 'A')
      return 0;
   else
   {
      if (a == ' ')
         return 1;
      else
         return 2;
   }
}

void reverse(char a[])
{
   if (a[0] > 'z' || a[0] < 'A')
      return;
   else
   {
      size_t width = strlen(a);
      for (int f = 0; f < (int)width; f++)
      {
         if (a[f] >= 'A' && a[f] <= 'Z')
            a[f] += 'a' - 'A';
      }
   }
   _Bool even = 0;
   for (int f = 0; f < len; f++)
      if (strcmp(a, sort[f]) == 0)
      {
         sum[f]++;
         even = 1;
         break;
      }

   if (!even)
   {
      size_t width = strlen(a);
      for (int f = 0; f < (int)width; f++)
         sort[len][f] = a[f];
      sum[len]++;
      len++;
   }

   return;
}
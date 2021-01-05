/*
 * @Author: Darcy 
 * @Date: 2020-12-22 21:50:53 
 * @Last Modified by: Darcy
 * @Last Modified time: 2020-12-22 21:59:42
 */
#include <stdio.h>
#include <string.h>

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

   while ((temp = getchar()) != '\n')
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

   for (int i = 0; i < x; i++)
      printf("%s", word[i]);

   printf("\n");
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
   size_t len = strlen(a);
   if (a[0] <= 'z' && a[0] >= 'A')
   {
      char b[1000];
      memset(b, 0, sizeof(b));
      for (int s = 0; s < (int)len; s++)
         b[s] = a[(int)len - s - 1];
      for (int s = 0; s < (int)len; s++)
         a[s] = b[s];
   }
   return;
}
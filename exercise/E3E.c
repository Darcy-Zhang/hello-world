#include <stdio.h>
#include <string.h>

int main(void)
{
   _Bool CheckReverse(char a[]);
   _Bool CheckType(char a);
   int convert(char a[]);

   int i, n, x;
   int bit, count;
   int judgecount;
   int maxx, maxs;
   char temp;
   _Bool condition;
   _Bool judgebool;
   _Bool hhh;
   char sentence[1000];
   char check[100];
   char digit[100][100];
   char judge[100][100];
   int time[100];
   int maxp[100];

   i          = 0;
   n          = 0;
   x          = 0;
   bit        = 0;
   count      = 0;
   judgecount = 0;
   maxx       = 0;
   maxs       = -1;
   judgebool  = 1;
   hhh        = 1;
   temp       = '\0';
   condition  = 0;
   memset(sentence, 0, sizeof(sentence));
   memset(check, 0, sizeof(check));
   memset(digit, 0, sizeof(digit));
   memset(judge, 0, sizeof(judge));
   memset(time, 0, sizeof(time));
   memset(maxp, 0, sizeof(maxp));

   while ((temp = getchar()) != EOF)
      sentence[i++] = temp;

   n = i;

   for (i = 0; i < n; i++)
   {
      if (CheckType(sentence[i]))
      {
         check[bit++] = sentence[i];
         condition = 1;
      }
      if (condition && !CheckType(sentence[i]))
      {
         condition = 0;
         if (CheckReverse(check))
         {
            for (x = 0; x < bit; x++)
               digit[count][x] = check[x];
            count++;
         }
         memset(check, 0, sizeof(check));
         bit = 0;
      }
   }

   for (i = 0; i < count; i++)
   {
      judgebool = 1;
      for (x = 0; x < judgecount; x++)
         if (strcmp(digit[i], judge[x]) == 0)
         {
            time[x]++;
            judgebool = 0;
         }
      
      if (judgebool)
      {
         for (x = 0; x < 100; x++)
            judge[judgecount][x] = digit[i][x];
         time[judgecount]++;
         judgecount++;
      }
   }

   for (i = 0; i < judgecount; i++)
      if (maxx < time[i])
      {
         maxx = time[i];
         maxs = i;
      }

   count = 0;

   if (maxs != -1)
      for (i = 0; i < judgecount; i++)
      {
         if (time[i] == maxx)
         {
            maxp[count] = convert(judge[i]);
            count++;
         }
      }

   while (hhh)
   {
      hhh = 0;
      for (i = 0; i < count - 1; i++)
         if (maxp[i] > maxp[i + 1])
         {
               x      = maxp[i];
            maxp[i]     = maxp[i + 1];
            maxp[i + 1] = x;
            hhh = 1;
         }
   }

   if (count == 0)
      printf("None\n");
   else
      for (i = 0; i < count; i++)
         printf("%d %d\n", maxp[i], maxx);

   return 0;
}

_Bool CheckReverse(char a[])
{
   size_t len;
   int s;
   _Bool t;

   s   = 0;
   len = strlen(a);
   t   = 1;

   if ((int)len < 2 || a[0] == '0')
      return 0;

   for (s = 0; s < (int)len; s++)
      if (a[s] != a[len - s - 1])
         t = 0;

   return t;
}

_Bool CheckType(char a)
{
   if ('0' <= a && a <= '9')
      return 1;
      else
         return 0;
}

int convert(char a[])
{
   size_t len;
   int p;
   int value;

   len   = strlen(a);
   value = 0;
   p     = 0;

   for (p = 0; p < (int)len; p++)
      value = value * 10 + a[p] - '0';

   return value;
}
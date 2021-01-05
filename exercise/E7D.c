#include <stdio.h>

int main(void)
{
   int abs(int a);
   int month(int a, int b);
   int year(int a);
   _Bool type1;
   _Bool type2;
   int a, b, c;
   int temp;
   int one, two;

   type1 = 1;
   type2 = 1;
   one = 1;
   two = 1;

   (void)scanf("%d/%d/%d", &a, &b, &c);

   if (a == 0 || a > 12)
      type1 = 0;
   if (b > 12)
      type2 = 0;
   if (c == 0)
      type2 = 0;
   if (c > 31)
      type2 = 0;
   if (c == 31 && (b == 4 || b == 6 || b == 9 || b == 11))
      type2 = 0;
   if (c > 29 && b == 2)
      type2 = 0;
   if (c == 29 && b == 2 && a % 4 != 0)
      type2 = 0;
      

   if (type1 && type2)
   {
      one = year(c) + month(a, c) + b;
      two = year(a) + month(b, a) + c;
      printf("%d\n", abs(one - two));
      return 0;
   }

   if (!type1 && type2)
   {
      temp = a;
      a = b;
      b = c;
      c = temp;
   }

   switch (a)
   {
      case 1: printf("January "); break;
      case 2: printf("February "); break;
      case 3: printf("March "); break;
      case 4: printf("April "); break;
      case 5: printf("May "); break;
      case 6: printf("June "); break;
      case 7: printf("July "); break;
      case 8: printf("August "); break;
      case 9: printf("September "); break;
      case 10: printf("October "); break;
      case 11: printf("November "); break;
      case 12: printf("December "); break;
   }

   printf("%d, 20%02d\n", b, c);

   return 0;
}

int abs(int a)
{
   return a >= 0 ? a :
         -a;
}

int month(int a, int y)
{
   int value;
   value = 0;
   switch (a)
   {
      case 12: value = value + 30;
      case 11: value = value + 31;
      case 10: value = value + 30;
      case 9: value = value + 31;
      case 8: value = value + 31;
      case 7: value = value + 30;
      case 6: value = value + 31;
      case 5: value = value + 30;
      case 4: value = value + 31;
      case 3: value = value + 28;
      case 2: value = value + 31;
      case 1: value = value + 0;
   }

   if (y % 4 == 0)
      value++;
   return value;
}

int year(int a)
{
   return (a - 1) / 4 * 1461 + ((a - 1) % 4) * 365;
}
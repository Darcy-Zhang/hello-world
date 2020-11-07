#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
   int day, month, year, w;
   bool a;


   printf("Enter date (mm/dd/yyyy)(The calculator can only deal with dates AFTER THE CE): ");
   scanf("%d /%d /%d", &month, &day, &year);

   if (day <= 0 || day >= 32 || month <= 0 || month >= 13 || year <= 0)
   {
      printf("The day does not exist!");
      exit(0);
   }

   if (day > 28)
   {
      if (day == 29)
      {
         if (month == 2)
         {
            if (year % 4 != 0)
            {
               printf("The day does not exist!");
               exit(0);
            }
            else if (year % 400 != 0 && year % 100 == 0)
            {
               printf("The day does not exist!");
               exit(0);
            }
         }
      }
      else if (day == 30)
      {
         if (month == 2)
         {
            printf("The day does not exist!");
            exit(0);
         }
      }
      else if (day == 31)
      {
         if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)
         {
            printf("The day does not exist!");
            exit(0);
         }
      }
   }

   if (year == 1582)
   {
      if (month == 10)
      {
         if (day >= 5 && day <= 14)
         {
            printf("The day does not exist!");
            exit(0);
         }
      }
   }


   if (year < 1582)
   {
      a = false;
   }
   else if (year == 1582)
   {
      if (month < 10)
      {
         a = false;
      }
      else if (month == 10)
      {
         if (day < 5)
         {
            a = false;
         }
         else if (day > 14)
         {
            a = true;
         }
      }
      else if (month > 10)
      {
         a = true;
      }
   }
   else if (year > 1582)
   {
      a = true;
   }

   if (month == 1 || month == 2)
   {
      month = month + 12;
      year = year - 1;
   }

   if (a)
   {
      w = (year % 100) + ((year % 100) / 4) + ((year / 100) / 4) - 2 * (year / 100) + ((13 * (month + 1)) / 5) + day - 1;
   }
   else
   {
      w = (year % 100) + ((year % 100) / 4) + ((year / 100) / 4) - 2 * (year / 100) + ((13 * (month + 1)) / 5) + day + 2;
   }

   printf("Dated this %d", day);
   switch (day)
   {
      case 1: case 21: case 31:
         printf("st");
         break;
      case 2: case 22:
         printf("nd");
         break;
      case 3: case 23:
         printf("rd");
         break;
      default:
         printf("th");
         break;
   }

   printf(" day of ");

   switch (month)
   {
      case 13: printf("January"); break;
      case 14: printf("February"); break;
      case 3: printf("March"); break;
      case 4: printf("April"); break;
      case 5: printf("May"); break;
      case 6: printf("June"); break;
      case 7: printf("July"); break;
      case 8: printf("August"); break;
      case 9: printf("September"); break;
      case 10: printf("October"); break;
      case 11: printf("November"); break;
      case 12: printf("December"); break;
   }

   printf(", on ");
   switch (w % 7)
   {
      case 0: printf("Sunday"); break;
      case 1: printf("Monday"); break;
      case 2: printf("Tuesday"); break;
      case 3: printf("Wednesday"); break;
      case 4: printf("Thursday"); break;
      case 5: printf("Friday"); break;
      case 6: printf("Saturday"); break;
   }

   printf(", %.4d.\n", year);

   return 0;
}

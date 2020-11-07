#include <stdio.h>

int main(void)
{
   int day, month, year, totalday;

   totalday = 0;

   printf("Enter date (mm/dd/yyyy): ");
   scanf("%d /%d /%d", &month, &day, &year);

   if (day <= 0 || day >= 32 || month <= 0 || month >= 13 || year <= 0)
      printf("The day does not exist!");
      exit;

   if (day > 28)
   {
      if (day == 29)
      {
         if (month == 2)
         {
            if (year % 4 != 0)
               printf("The day does not exist!");
               exit;
            else if (year % 400 != 0 && year % 100 = 0)
               printf("The day does not exist!");
               exit;
         }
      }
      else if (day == 30)
      {
         if (month == 2)
         {
            printf("The day does not exist!");
            exit;
         }
      }
      else if (day == 31)
      {
         if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)
         {
            printf("The day does not exist!");
            exit;
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
            exit;
         }
         else if (day > 14)
         {
            totalday = totalday - 10;
         }
      }
      else if (month > 10)
      {
         totalday = totalday - 10;
      }
   }
   else if (year > 1582)
   {
      totalday = totalday - 10;
   }

   totalday = totalday + (year - 1) * 365 + year

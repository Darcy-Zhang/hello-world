#include <stdio.h>

int main(void)
{
   int count = 0;
   while (getchar() != '\n')
      count++;
   printf("%d\n", count);
   return 0;
}
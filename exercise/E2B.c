#include <stdio.h>
#include <string.h>

int main(void)
{
   char a[1000];
   int m = 0;
   int i = 0;
   int x = 0;
   char temp = '\0';

   memset(a, 0, sizeof(a));//以上全为初始化

   (void) scanf("%d", &m);//读取偏移量
   (void) getchar();//干掉末尾的回车

   while ((temp = (char)getchar()) != '\n')//读取字符串
   {
      a[i] = temp;
      i++;
   }

   for (x = 0; x < i; x++) a[x+i] = a[x];//字符串再复制一遍，此时长度变为原来的两倍

   for (x = i - (m % i); x < 2 * i - (m % i); x++) (void) putchar(a[x]);//打印所需的部分

   printf("\n");

   return 0;
}

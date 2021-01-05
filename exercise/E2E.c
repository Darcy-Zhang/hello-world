#include <stdio.h>
#include <string.h>

int main(void)
{
   void output(int array[], int status[], int x, int left);//变量分别是：数组，数组输出的状态，数组长度以及剩余的还未判断状态的数字的值
   int array[100], status[100], i, n, x, y, left;

   (void) scanf("%d", &n);//需要读取几次

   for (i = 0; i < n; i++)
   {
      memset(array, 0, sizeof(array));//清空内存
      memset(status, 0, sizeof(status));

      (void) scanf("%d", &x);//读取数组长度
      left = x;//初始化left

      for (y = 0; y < x; y++) (void) scanf("%d", &array[y]);//读取数组

      output(array, status, x, left);//调用函数
   }

   return 0;
}

void output(int array[], int status[], int x, int left)
{
   int count;

   if  (left == 0)//递归结束条件
   {
      printf("-->");
      for (count = 0; count < x; count++) if (status[count]) printf(" %d", array[count]);
      printf("\n");
      return ;
   }

   status[x-left] = 1;//首先输出包含该数字的情况
   output(array, status, x, left - 1);
   status[x-left] = 0;//然后输出不包含该数字的情况
   output(array, status, x, left - 1);

   return ;
}

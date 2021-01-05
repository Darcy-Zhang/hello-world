#include <stdio.h>
#include <string.h>

int table[1000][1000];//表格
int row = 0, column = 0;//表格的行数和列数

int main(void)
{
   void func(char a[]);//修改表格的函数

   int n = 0, i = 0, x = 0;
   char order[100];//读取进来的命令

   memset(table, 0, sizeof(table));
   memset(order, 0, sizeof(order));

   (void) scanf("%d%d", &row, &column);//读取表格行数

   for (i = 1; i <= row; i++) for (n = 1; n <= column; n++) (void) scanf("%d", &table[i][n]);//读取表格

   (void) scanf("%d", &x);//命令个数

   for (n = 0; n < x; n++)//循环执行命令
   {
      memset(order, 0, sizeof(order));
      (void) scanf("%s", order);
      func(order);
   }

   for (i = 1; i <= row; i++)//打印表格
   {
      for (n = 1; n < column; n++) printf("%d ", table[i][n]);
      printf("%d", table[i][column]);
      printf("\n");
   }

   return 0;
}

void func(char a[])
{
   void SR(void);//交换行
   void SC(void);//交换列
   void DR(void);//删除行
   void DC(void);//删除列
   void IR(void);//插入行
   void IC(void);//插入列

   if (strcmp(a, "SR") == 0) SR();
   if (strcmp(a, "SC") == 0) SC();
   if (strcmp(a, "DR") == 0) DR();
   if (strcmp(a, "DC") == 0) DC();
   if (strcmp(a, "IR") == 0) IR();
   if (strcmp(a, "IC") == 0) IC();

   return ;
}

void SR(void)
{
   int a, b;
   (void) scanf("%d%d", &a, &b);
   int middle;
   int o = 1;
   for (o = 1; o <= column; o++)
   {
      middle = table[a][o];
      table[a][o] = table[b][o];
      table[b][o] = middle;
   }
   return ;
}

void SC(void)
{
   int a, b;
   (void) scanf("%d%d", &a, &b);
   int middle;
   int o = 1;
   for (o = 1; o <= row; o++)
   {
      middle = table[o][a];
      table[o][a] = table[o][b];
      table[o][b] = middle;
   }
   return ;
}

void DR(void)
{
   int a;
   (void) scanf("%d", &a);
   int b = 1;
   for (; a <= row; a++) for (b = 1; b <= column; b++) table[a][b] = table[a+1][b];
   row--;
   return ;
}

void DC(void)
{
   int a;
   (void) scanf("%d", &a);
   int b = 1;
   for (; a <= column; a++) for (b = 1; b <= row; b++) table[b][a] = table[b][a+1];
   column--;
   return ;
}

void IR(void)
{
   int a;
   (void) scanf("%d", &a);
   int b = 1;
   int temp = row;
   for (; temp >= a; temp--) for (b = 1; b <= column; b++) table[temp+1][b] = table[temp][b];
   for (b = 1; b <= column; b++) table[a][b] = 0;
   row++;
   return ;
}

void IC(void)
{
   int a;
   (void) scanf("%d", &a);
   int b = 1;
   int temp = column;
   for (; temp >= a; temp--) for (b = 1; b <= row; b++) table[b][temp+1] = table[b][temp];
   for (b = 1; b <= row; b++) table[b][a] = 0;
   column++;
   return ;
}

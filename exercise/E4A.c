/*
 * @Author: Darcy 
 * @Date: 2020-12-22 14:06:23 
 * @Last Modified by: Darcy 
 * @Last Modified time: 2020-12-22 14:06:23 
 */
#include <stdio.h>

int main() {

    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        int a, b, c, d;
        int temp;

        scanf("%d%d%d%d", &a, &b, &c, &d);
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if (b > c)
        {
            temp = b;
            b = c;
            c = temp;
        }
        if (c > d)
        {
            temp = c;
            c = d;
            d = temp;
        }
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if (b > c)
        {
            temp = b;
            b = c;
            c = temp;
        }
        if (c > d)
        {
            temp = c;
            c = d;
            d = temp;
        }
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if (b > c)
        {
            temp = b;
            b = c;
            c = temp;
        }
        if (c > d)
        {
            temp = c;
            c = d;
            d = temp;
        }
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if (b > c)
        {
            temp = b;
            b = c;
            c = temp;
        }
        if (c > d)
        {
            temp = c;
            c = d;
            d = temp;
        }
        printf("%d %d %d %d\n", a, b, c, d);
    }

   

    return 0;

}
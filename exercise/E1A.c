#include <stdio.h>

int main(void)
{
	int n, a, k, s;
	int age(int n, int k, int s);
	
	scanf("%d%d%d", &n, &a, &k);
	
	s = a;
	
	if (n <= 1 || n > 100 || k > 100 || k <=0 || a > 100 || a <=0)
	{
		printf("Wrong Number");
	}
	else
	{
		s = age(n, k, s);
		printf("%d", s);
	}
	
	return 0;
}

int age(int n, int k, int s)
{
	if (n == 1)
	{
		return s;
	}
	else
	{
		return k + age(n-1, k, s);
	}
}

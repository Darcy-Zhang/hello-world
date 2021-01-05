#include <stdio.h>

int main(void)
{
	int n = 0;
	int temp;
	int i = 0;
	int sum = 0;
	
	(void)scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		sum += temp;
	}
	
	printf("%.2f\n", (float)sum/(float)n);
	
	return 0;
}
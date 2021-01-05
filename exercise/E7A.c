#include <stdio.h>
#include <string.h>

int main(void)
{
	int number[100];
	memset(number, 0, sizeof(number));
	int i = 0;
	int x = 0;
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &number[i]);
	}
	
	for (i = 1; i < 10; i++)
	{
		if (number[i] != 0)
		{
			printf("%d", i);
			number[i]--;
			break;
		}
	}
	
	for (x = 0; x < 100; x++)
	{
		for (i = 0; i < 10; i++)
		{
			if (number[i] != 0)
			{
				printf("%d", i);
				number[i]--;
				break;
			}
		}
	}
	
	printf("\n");
	
	return 0;
}
#include <stdio.h>
#include <string.h>

int main(void)
{
	int convert(char a[]);
	int n = 0;
	int count = 0;
	int i = 0;
	int x = 0;
	int sum = 0;
	int temp = '\0';
	char digit[100];
	int number = 0;

	(void)scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
 		memset(digit, 0, sizeof(digit));
		while ((temp = getchar()) == ' ' || temp == '\n')
		{
			continue;
		}
		digit[0] = temp;
		number = 0;
		x = 1;

		while((temp = getchar()) != ' ' && temp != '\n')
		{
			digit[x++] = temp;
		}

		if (digit[0] == 'n')
		{
			continue;
		}

		number = convert(digit);

		sum += number;
		count++;

	}

	if (count == 0)
	{
		printf("n/a\n");
	}
	else
	{
		printf("%.2f\n", (float)sum / (float)count);
	}

	return 0;
}

int convert(char a[])
{
	size_t len = strlen(a);
	int all = 0;
	int s = 0;

	if (a[0] == '-')
	{
		for (s = 1; s < (int)len; s++)
		all = all * 10 + a[s] - '0';

		return -all;
	}

	for (s = 0; s < (int)len; s++)
	{
		all = all * 10 + a[s] - '0';
	}

	return all;
}
#include <stdio.h>
#include <string.h>

int main(void)
{
	int number[100];
	int diff[100];
	int n, i, x, count;
	_Bool t;

	while (scanf("%d", &n) != EOF)
	{
		i = 0;
		x = 0;
		count = 0;
		memset(number, 0, sizeof(number));
		memset(diff, 0, sizeof(diff));
		for (i = 0; i < n; i++)
		{
			scanf("%d", &number[i]);
		}

		for (i = 0; i < n; i++)
		{
			t = 1;
			for (x = 0; x < count; x++)
			{
				if (diff[x] == number[i])
				{
					t = 0;
				}
			}

			if (t)
			{
				diff[count] = number[i];
				count++;
			}
		}

		printf("%d\n", count);
	}

	return 0;
}
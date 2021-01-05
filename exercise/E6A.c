/*
 * @Author: Darcy 
 * @Date: 2020-12-29 17:53:26 
 * @Last Modified by: Darcy 
 * @Last Modified time: 2020-12-29 17:53:26 
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
	char sentence[100];
	char temp = '\0';
	int n = 0;
	int i = 0;
	int x = 0;
	int count = 0;
	
	(void)scanf("%d", &n);
	getchar();
	
	for (i = 0; i < n; i++)
	{
		x = 0;
		count = 0;
		memset(sentence, 0, sizeof(sentence));
		while ((temp = getchar()) != '\n')
		{
			sentence[x++] = temp;
		}
		
		while (sentence[count++] == 'A')
		{
			continue;
		}
		
		if (sentence[count - 1] == 'S' && sentence[count] == 'C' && sentence[count + 1] == 'U')
		{
			count += 2;
			while (sentence[count++] == 'A')
			{
				continue;
			}
			if (sentence[count] != '\0')
			{
				printf("NO\n");
				continue;
			}
			else
			{
				printf("YES\n");
				continue;
			}
		}
		else
		{
			printf("NO\n");
			continue;
		}
	}
	
	return 0;
}

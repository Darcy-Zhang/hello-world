#include <stdio.h>

int main(void)
{
	unsigned int i, x, y;
	unsigned int m, n;	
	unsigned char a[10];
	unsigned char temp;
	unsigned int GB[38] = {'Íî','¾©','Ãö','¸Ê','ÔÁ','¹ð','¹ó','Çí','¼½',
	'Ô¥','ºÚ','¶õ','Ïæ','¼ª','ËÕ','¸Ó','ÁÉ','ÃÉ','Äþ','Çà',
	'Â³','½ú','ÉÂ','»¦','´¨','½ò','²Ø','ÐÂ','ÔÆ','Õã','Óå',
	'¹Ò','Ñ§','¾¯','¸Û','°Ä','Ê¹','Áì'};
	unsigned int UTF[38] = {0xE79A96, 0xE4BAAC, 0xE997BD, 0xE79498, 0xE7B2A4,
	0xE6A182, 0xE8B4B5, 0xE790BC, 0xE58680, 0xE8B1AB, 0xE9BB91,
	0xE98482, 0xE6B998, 0xE59089, 0xE88B8F, 0xE8B5A3, 0xE8BEBD,
	0xE89299, 0xE5AE81, 0xE99D92, 0xE9B281, 0xE6998B, 0xE99995,
	0xE6B2AA, 0xE5B79D, 0xE6B4A5, 0xE8978F, 0xE696B0, 0xE4BA91,
	0xE6B599, 0xE6B89D, 0xE68C82, 0xE5ADA6, 0xE8ADA6, 0xE6B8AF,
	0xE6BEB3, 0xE4BDBF, 0xE9A286};
	
	printf("Please enter the license plate number and press Enter to end: ");
		
	for (; (temp = getchar()) != '\n';)
	{
		if (temp != ' ')
		{
			a[i] = temp;
			i++;
		}
	}
	
	for (x = 0; x < i; x++)
	{
		if (a[x] < 128)
		{
			if (97 <= a[x] && a[x] <= 122)
			{
				a[x] = a[x] - 32;
			}
			
			printf("%c", a[x]);
		}
		else
		{
			m = (int)a[x];
			n = (int)a[x+1];
			
			for (y = 0; y < 38; y++)
			{
				if (((m * 256) + n) == GB[y])
				{
					printf(" %x ", UTF[y]);
					y = y + 38;
				}
			}
			
			x++;
		}
	}
			
	return 0;
}

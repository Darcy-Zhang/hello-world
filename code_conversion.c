#include <stdio.h>

int main(void)
{
	unsigned int i, x, y;
	unsigned int m, n;	
	unsigned char a[10];
	unsigned char temp;
	unsigned int GB[38] = {'皖','京','闽','甘','粤','桂','贵','琼','冀',
	'豫','黑','鄂','湘','吉','苏','赣','辽','蒙','宁','青',
	'鲁','晋','陕','沪','川','津','藏','新','云','浙','渝',
	'挂','学','警','港','澳','使','领'};
	unsigned int UTF[38] = {0xE79A96, 0xE4BAAC, 0xE997BD, 0xE79498, 0xE7B2A4,
	0xE6A182, 0xE8B4B5, 0xE790BC, 0xE58680, 0xE8B1AB, 0xE9BB91,
	0xE98482, 0xE6B998, 0xE59089, 0xE88B8F, 0xE8B5A3, 0xE8BEBD,
	0xE89299, 0xE5AE81, 0xE99D92, 0xE9B281, 0xE6998B, 0xE99995,
	0xE6B2AA, 0xE5B79D, 0xE6B4A5, 0xE8978F, 0xE696B0, 0xE4BA91,
	0xE6B599, 0xE6B89D, 0xE68C82, 0xE5ADA6, 0xE8ADA6, 0xE6B8AF,
	0xE6BEB3, 0xE4BDBF, 0xE9A286};
	
	printf("Please enter the license plate number and press Enter to end: ");
		
	for (; (temp = getchar()) != '\n';)//循环读取屏幕上的字符，敲回车停止 
	{
		if (temp != ' ')//忽略空格 
		{
			a[i] = temp;//把字符放到数组里 
			i++;
		}
	}
	
	for (x = 0; x < i; x++)
	{
		if (a[x] < 128)//通过判断字符编码是否小于128来判断中文和ASCII码 
		{
			if (97 <= a[x] && a[x] <= 122)//顺手写的，目的是遇到小写字母就把它转化为大写 
			{
				a[x] = a[x] - 32;
			}
			
			printf("%c", a[x]);//打印出来 
		}
		else
		{
			m = (int)a[x];//把编码转化为整形进行运算，因为我之前直接运算出问题了，所以多做了赋值这一步 
			n = (int)a[x+1];
			
			for (y = 0; y < 38; y++)
			{
				if (((m * 256) + n) == GB[y])//如果两个字符的编码等于数组中的汉字编码（比较两个是因为汉字占两个字节） 
				{
					printf(" %x ", UTF[y]);//打印对应的字符 
					y = y + 38;//跳出循环，事实上没什么意义 
				}
			}
			
			x++;//因为一个汉字等于两个字符，所以就一次跳过两个 
		}
	}
			
	return 0;
}

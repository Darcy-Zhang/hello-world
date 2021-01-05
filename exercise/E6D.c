#include <stdio.h>
#include <string.h>
char name[111][111],id[111][111],temp[111];
int n,i,grade[111];
int calc(char s[])
{
	int l=strlen(s);
	if (s[0]=='n') return -1;
	int res=0,i;
	for (i=0;i<l;i++)
		res=res*10+s[i]-'0';
	return res;
}
int main()
{
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%s%s%s",name[i],id[i],temp);
		grade[i]=calc(temp);
	}
	int maxx=0,maxp=1,minn=0x3f3f3f3f,minp=1;
	for (i=1;i<=n;i++)
	{
		if (grade[i]==-1) continue;
		if (grade[i]>maxx||(grade[i]==maxx&&strcmp(name[i],name[maxp])<0))
		{
			maxp=i;
			maxx=grade[i];
		}
		if (grade[i]<minn||(grade[i]==minn&&strcmp(name[i],name[minp])>0))
		{
			minp=i;
			minn=grade[i];
		}
	}
	printf("%s %s\n",name[maxp],id[maxp]);
	printf("%s %s\n",name[minp],id[minp]);
	return 0;
}
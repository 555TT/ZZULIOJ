#include<stdio.h>
#include<string.h>
int main()
{
	char c[51];
	gets(c);
	int len=strlen(c),flag=0;
	if(c[0]>='0'&&c[0]<='9')
	printf("no");
	else
	{
		for(int i=0;i<len;i++)
		{
			if(c[i]!='_'&&!(c[i]>='0'&&c[i]<='9')&&!(c[i]>='a'&&c[i]<='z')&&!(c[i]>='A'&&c[i]<='Z'))
			flag=1;
		}
		if(flag==1)
		printf("no");
		else
		printf("yes");
	}
	return 0;
}

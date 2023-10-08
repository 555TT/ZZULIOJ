#include<stdio.h>
#include<string.h>
int main()
{
	char c[101];
	gets(c);
	if(c[0]>='a'&&c[0]<='z')
	c[0]-=32;
	int len=strlen(c);
	for(int i=1;i<len;i++)
	{
		if(c[i]!=' '&&c[i-1]==' ')
		{
		     if(c[i]>='a'&&c[i]<='z')
		     c[i]-=32;
		}
	}
	printf("%s", c);
	return 0;
}

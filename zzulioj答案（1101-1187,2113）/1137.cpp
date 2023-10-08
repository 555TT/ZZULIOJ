#include<stdio.h>
#include<string.h>
int main()
{
	char c[201];
	gets(c);
	char a=c[0];
	int len=strlen(c);
	for(int i=1;i<len;i++)
	{
		if(c[i]>a)
		a=c[i];
	}
	for(int i=0;i<len;i++)
	{
		printf("%c", c[i]);
		if(c[i]==a)
		printf("(max)");
	}
	return 0;
}

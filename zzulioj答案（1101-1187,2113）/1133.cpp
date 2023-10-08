#include<stdio.h>
#include<string.h>
int main()
{
	char c[1000];
	gets(c);
	int len=strlen(c),sum=0;
	for(int i=0;i<len-1;i++)
	{
		if(c[i]!=' '&&c[i+1]==' ')
		sum++;
	}
	if(c[len-1]!=' ')
	sum++;
	printf("%d",sum);
	return 0;
}

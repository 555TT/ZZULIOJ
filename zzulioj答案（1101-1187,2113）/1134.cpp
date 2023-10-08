#include<stdio.h>
#include<string.h>
int main()
{
	char c[101];
	gets(c);
	int len=strlen(c);
	int sum=0;
	for(int i=len-1,k=1;i>=0;i--)
	{
		if(c[i]>='0'&&c[i]<='9')
		{
		sum+=(c[i]-48)*k;
		k*=10;
		}
	}
	printf("%d",sum*2);
	return 0;
}

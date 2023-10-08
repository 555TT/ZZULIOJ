#include<stdio.h>
#include<string.h>
void dToK(int n, int k, char str[])
{
	int i=0; 
	for(;n!=0;i++)
	{
		str[i]=n%k+'0';
		n=n/k;
	}
	for(i--;i>-1;i--)
	printf("%c", str[i]);
	printf("\n");
}
int main()
{
	int n;char str[32];
	scanf("%d", &n);
	dToK(n,2,str);
	dToK(n,3,str);
	dToK(n,7,str);
	dToK(n,8,str);
	return 0;
}

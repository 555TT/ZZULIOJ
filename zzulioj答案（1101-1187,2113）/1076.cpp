#include<stdio.h>
int main()
{
	int n, flag=0;
	scanf("%d", &n);
	for(int i=1;i<=9;i++)
	for(int j=1;j<=9;j++)
	for(int k=0;k<=9;k++)
	{
		if(i*100+j*10+k+j*100+k*10+k==n)
		{
		printf("%4d%4d%4d\n", i,j, k);
		flag=1;
		}
	}
	if(flag==0)
	printf("No Answer");
	return 0;
}

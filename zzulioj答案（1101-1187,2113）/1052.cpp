#include<stdio.h>
int main()
{
	int n,m, a, sum=0;
	scanf("%d%d", &n,&a);
	m=a;
	for(int i=1;i<=n;i++)
	{
		sum=sum+m;
		m=m*10+a;
	}
	printf("%d", sum);
	return 0;
 }

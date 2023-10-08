#include<stdio.h>
int main()
{
	int n,sum=0,i=1, m=1, p=1;
	scanf("%d", &n);
	for(;i<=n;i++)
	{
		for(;p<=i;p++)
		{
			m=m*p;
		}
		sum+=m;
	}
	printf("%d", sum);
	return 0;
}

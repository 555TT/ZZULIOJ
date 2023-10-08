#include<stdio.h>
int main()
{
	int m, n, sum1=0, sum2=0;
	scanf("%d%d", &m, &n);
	for(;m<=n;m++)
	{
		if(m%2==0)
		{
			sum2=sum2+m*m;
		}
		else
		{
			sum1=sum1+m*m*m;
		}
	}
		printf("%d %d", sum2, sum1);
	return 0;
}

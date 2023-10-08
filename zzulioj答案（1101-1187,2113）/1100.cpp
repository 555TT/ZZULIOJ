#include<stdio.h>
int fact(int n)
{
	double sum=1;
	for(int i=1;i<=n;i++)
	{
		sum*=i;
	}
	return sum;
}
int main()
{
	int m, k, x;
	scanf("%d%d", &m,&k);
	x=fact(m)/(fact(k)*fact(m-k));
	printf("%d", x);
	return 0;
}

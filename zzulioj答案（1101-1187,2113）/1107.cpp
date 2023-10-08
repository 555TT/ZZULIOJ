#include<stdio.h>
#include<math.h>
int inverse(int n);
int main()
{
	int n,m;
	scanf("%d",&n);
	while( m = inverse(n), m != n)
	{
		printf("%d ", n);
		n=m+n;
	}
	printf("%d",n);
	return 0;
}
int inverse(int n)
{
	int i=log10(n);
	int sum=0;
	for(;i>=0;i--)
	{
		sum+=n%10*pow(10,i);
		n=n/10;
	}
	return sum;
}

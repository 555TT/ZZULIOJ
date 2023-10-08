#include<stdio.h>
#include<math.h>
int f(int n)
{
	int j=log10(n)+1, sum=0,x=1;
	for(int i=1;i<j;i++)
	x*=10;
	for(int i=1;i<=j;i++)
	{
		sum+=n%10*x;
		x/=10;
		n/=10;
	}
	return sum;
}
int main()
{
	int m,n;
	scanf("%d%d", &m,&n);
	for(;m<=n;m++)
	{
		if(m==f(m))
		printf("%d ", m);
	}
	return 0;
} 

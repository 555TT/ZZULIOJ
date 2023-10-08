#include<stdio.h>
#include<math.h>
int main()
{
	double x,m, n=1, sum=0;int p=1;
	scanf("%lf", &x);
	for(int i=1;i<=10;i++)
	{
		for(;p<=2*i-1;p++)
		{
			n=n*p;
		}
		m=n;
		sum=sum+pow(-1,i-1)*pow(x,2*i-1)/m;
	}
	printf("%.3f", sum);
	return 0;
}

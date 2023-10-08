#include<stdio.h>
int main()
{
	double x, y;
	scanf("%lf", &x);
	if(x<500)
	printf("%.2f", x);
	if(x>=500&&x<1000)
	{
		y = x*0.95;
	    printf("%.2f", y);
	}
	if(x>=1000&&x<3000)
	{
		y = x*0.9;
		printf("%.2f", y);
	}
	if(x>=3000&&x<5000)
	{
		y = x*0.85;
		printf("%.2f", y);
	}
	if(x>=5000)
	{
		y = x*0.8;
		printf("%.2f", y);
	}
	return 0;
	

}

#include<stdio.h>
int main()
{
	int x; double y;
	scanf("%d", &x);
	if(x<=10000)
	{
		y = 1500+x*0.05;
		printf("%.2f", y);
	}
	if(x>10000&&x<=50000)
	{
		y = 1500+10000*0.05+(x-10000)*0.03;
		printf("%.2f", y);
	}
	if(x>50000)
	{
		y = 1500+10000*0.05+40000*0.03+(x-50000)*0.02;
		printf("%.2f", y);
	}
	return 0;
}

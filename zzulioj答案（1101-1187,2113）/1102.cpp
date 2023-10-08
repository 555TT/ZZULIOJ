#include<stdio.h>
double CancelFee(double price)
{
	int m;double n, n1, price1;;//n：全部退票费，n1:退票费的小数部分，m：退票费的整数部分 ,price1:折算后的退票费 
	n=price*0.05;
	m=n;
	n1=n-m;
	if(n1<0.25)
	{
		n1=0;
	}
	else if(n1>=0.25&&n1<0.75)
	n1=0.5;
	else if(n1>=0.75)
	n1=0;
	price1=n1+m;
	return price1;
}
int main()
{
	double price;
	scanf("%lf", &price);
	printf("%.1f",CancelFee(price));
	return 0;
}

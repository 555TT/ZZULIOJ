#include<stdio.h>
int main()
{
	unsigned int a, price;
	scanf("%d", &a);
	if(a<30)
	{
	   price = a*50;
	   printf("%d", price);
	}
	else
	{
		price = a*48;
		printf("%d", price);
	}
	return 0;
} 

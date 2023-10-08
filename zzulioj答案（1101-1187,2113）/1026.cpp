#include<stdio.h>
int main()
{
	char n;
	scanf("%c", &n);
	if(n>=65&&n<=90)
	printf("upper");
	else
	if(n>=97&&n<=122)
	printf("lower");
	else
	if(n>=48&&n<=57)
	printf("digit");
	else
	printf("other");
	return 0;
} 

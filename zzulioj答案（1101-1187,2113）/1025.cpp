#include<stdio.h>
int main()
{
	char a, b,c, max;
	scanf("%c %c %c", &a, &b, &c);
	max = a;
	if(b>=a)
	max = b;
	if(c>=max)
	max = c;
	printf("%c", max);
	return 0;
} 

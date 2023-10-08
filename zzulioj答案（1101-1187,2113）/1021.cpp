#include<stdio.h>
int main()
{
	int a, b, c, max;
	scanf("%d%d%d", &a, &b, &c);
	max = b;
	if(a>=b)
	max = a;
	if(c>=a)
	max = c;
	printf("%d", max);
	return 0;
}

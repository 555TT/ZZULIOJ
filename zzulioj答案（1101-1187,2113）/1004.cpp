#include<stdio.h>
int main()
{
	int n, x, y, z;
	scanf("%d", &n);
	x = n/100; y = n%100 / 10;z = n%10;
	printf("%d %d %d\n", z, y, x);
	return 0;
} 

#include<stdio.h>
int main()
{
	int n,x;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%*6d%5d", &x);
		printf("6%05d\n",x);
	}
	return 0;
}

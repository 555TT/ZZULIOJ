#include<stdio.h>
int main()
{
	int n, i, p, x = 0;
	scanf("%d", &n);
	for(i = 1; i<=n; i++)
	{
		scanf("%d", &p);
		x+=p;
	}
	printf("%d", x);
	return 0;
}

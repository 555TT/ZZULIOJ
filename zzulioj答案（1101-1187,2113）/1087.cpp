#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int y,m,d;
	while(n--)
	{
		scanf("%*6d%4d%2d%2d%*5d", &y,&m,&d);
		printf("%04d-%02d-%02d\n", y,m,d);
	} 
	return 0;
}

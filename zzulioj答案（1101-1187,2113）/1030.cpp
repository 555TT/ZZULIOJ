#include<stdio.h>
int main()
{
	int m, n, t;
	scanf("%d%d%d", &m, &n, &t);
	if(m*m+n*n==t*t||m*m+t*t==n*n||n*n+t*t==m*m)
	printf("yes");
	else 
	printf("no");
	return 0;
}

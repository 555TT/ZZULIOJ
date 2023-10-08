#include<stdio.h>
int main()
{
	int i, m, n, p;
	scanf("%d", &i);
	m = i/100, n = (i%100)/10, p = (i%100)%10;
	if(i == m*m*m+n*n*n+p*p*p)
	printf("yes");
	else
	printf("no");
	return 0;
}

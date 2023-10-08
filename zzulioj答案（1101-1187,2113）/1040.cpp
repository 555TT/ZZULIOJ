#include<stdio.h>
int main()
{
	int n; double i, m=0;
	scanf("%d", &n);
	for(i = 1; i<=2*n-1; i = i+2)
	{
		m = m+1/i;
	}
	printf("%.2f", m);
	return 0;
}	

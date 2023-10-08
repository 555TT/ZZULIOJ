#include<stdio.h>
int main()
{
	int n, i; double m, o=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		scanf("%lf", &m);
		if(m<60)
		o++;
	}
	printf("%.2f", o/n);
	return 0;
}

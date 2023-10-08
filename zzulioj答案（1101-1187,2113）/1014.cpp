#include<stdio.h>
#include<math.h>
int main()
{
	double n1, n2, n3, p;
	scanf("%lf%lf%lf", &n1, &n2, &n3);
	p = (n1+n2+n3)/2;
	printf("%.2f", sqrt(p*(p-n1)*(p-n2)*(p-n3)));
	return 0;
}

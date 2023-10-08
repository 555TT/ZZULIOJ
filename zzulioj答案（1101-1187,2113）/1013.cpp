#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, d;
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
	printf("%.2f", sqrt((d - b)*(d-b)+(c-a)*(c-a)));
	return 0;
}

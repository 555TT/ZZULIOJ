#include<stdio.h>
#define PI 3.14159
int main()
{
	double r, h;
	scanf("%lf%lf", &r, &h);
	printf("%.2f", 2*PI*r*h + 2*PI*r*r);
	return 0;
}

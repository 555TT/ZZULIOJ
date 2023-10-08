#include<stdio.h>
#define PI 3.14159
int main()
{
	double r;
	scanf("%lf", &r);
	printf("%.2f %.2f", 2*PI*r, PI*r*r);
}

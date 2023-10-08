#include<stdio.h>
#include<math.h>
const double RATE = 0.0225;
int main(void)
{
	int n;
	double capital;
	scanf("%d%lf", &n, &capital);
	printf("%.6f", capital * pow(1 + RATE, n));
	return 0;
}

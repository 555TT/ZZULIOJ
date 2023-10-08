#include<stdio.h>
#include<math.h>
int main()
 {	
	int n, y = 1;
	double i, m = 0;
	scanf("%d", &n);
	for (i = 1; i <= 2 * n - 1; i += 2, y++)
		m = m + pow(-1, y - 1) * (1 / i);
	printf("%.2f", m);
	return 0;
  } 

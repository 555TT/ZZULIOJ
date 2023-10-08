#include<stdio.h>
int main()
{
	int n, i;
	double fact;
	fact = 1.0;
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	 {fact *= i;
    printf("%-4d%-20.0f\n", i, fact);
	 }
	return 0;
} 

#include<stdio.h>
#include<limits.h>
int main(void)
{
	int n, max, i;
	scanf("%d", &n);
	max = INT_MIN;
	for(i = 1; i <= n; i++)
	{
     int num;
	scanf("%d", &num);
	if(num > max)
	max = num;
	}
	printf("%d\n", max);
    return 0;
}

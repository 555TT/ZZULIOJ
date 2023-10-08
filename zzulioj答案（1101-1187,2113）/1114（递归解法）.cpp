#include<stdio.h>
void inverse(int n)
{
	int sum;
	scanf("%d", &sum);
	if(n>1)
	{
		inverse(n-1);
		printf("%4d", sum);
	}
	if(n==1)
	printf("%4d", sum); 
}
int main()
{
	int n;
	scanf("%d", &n);
	inverse(n);
	return 0;
}

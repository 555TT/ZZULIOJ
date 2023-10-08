#include<stdio.h>
int main()
{
	int n, i, number, p=1;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%d", &number);
		if(number%2!=0)
		p=p*number;
	}
	printf("%d", p);
	return 0;
}

#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d", &n);
	while(n!=1)
	{
		for(i=2;i<=n;i++)
		{
			if(n%i==0)
			{
			printf("%d ", i);
			break;
			}
		}
		n=n/i;
	}
	return 0;
}

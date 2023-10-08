#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		int n,x, sum=0;
		scanf("%d", &n);
		for(int j=1;j<=n;j++)
		{
			scanf("%d", &x);
			sum+=x;
		}
		printf("%d\n", sum);
	}
	return 0;
}

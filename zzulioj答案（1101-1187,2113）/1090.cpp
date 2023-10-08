#include<stdio.h>
int main()
{
	int n,x,y;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d", &x,&y);
		int sum=1;
		while(y--)
		{
			sum=sum*x%1000;
		}
		printf("%d\n", sum);
	}
	return 0;
}

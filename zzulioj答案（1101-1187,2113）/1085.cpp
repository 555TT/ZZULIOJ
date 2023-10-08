#include<stdio.h>
int main()
{
	int n,x;
	while(scanf("%d", &n)!=EOF)
	{
		int sum=1;
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&x);
			if(x%2!=0)
			sum*=x;
		}
		printf("%d\n", sum);
	}
	return 0;
}

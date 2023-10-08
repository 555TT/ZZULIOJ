#include<stdio.h>
int main()
{
	int t,n,sum,max,mi;
	scanf("%d", &t);
	while(t--)
	{
		max=-1,sum=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d", &mi);
			sum+=mi;
			if(mi>max)
			max=mi;
		}
		sum-=max;
		if(max-1<=sum)
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
} 

#include<stdio.h>
int main()
{
	int n[1000],sum,k=0,x;
	scanf("%d", &x);
	for(int i=0;i<x;i++)
	{
		int flag=0;
		scanf("%d", &sum);
		if(i==0)
		{
			n[k]=sum;
			k++;
		}
		else
		{
			for(int j=0;j<=k;j++)
			{
				if(sum==n[j])
				flag=1;
			}
			if(flag==0)
			{
				n[k]=sum;
				k++;
			}
		}
	}
	int t;
	for(int i=1;i<k;i++)
	{
		for(int j=0;j<k-i;j++)
		{
			if(n[j]>n[j+1])
			{
				t=n[j];
				n[j]=n[j+1];
				n[j+1]=t;
			}
		}
	}
	printf("%d\n", k);
	for(int i=0;i<k;i++)
	printf("%d ", n[i]);
	return 0;
}

#include<stdio.h>
int main()
{
	int fun(int x,int *a);
	int c[10]={0};
	for(int i=102;i<988;i++)
	{
		if(i!=102)
		for(int j=1;j<10;j++)
		c[j]=0;
		if(fun(i,c)==1)
		{
			if(fun(2*i,c)==1&&2*i<1000)
			{
				if(fun(3*i,c)==1&&3*i<1000)
				printf("%d %d %d\n",i,2*i,3*i);
			}
		}
	}
	return 0;
}
int fun(int x,int *a)
{
	int n1=x/100;
	int n2=x%100/10;
	int n3=x%10;
	if(n1!=0&&n2!=0&&n3!=0)
	if(n1!=n2&&n1!=n3&&n2!=n3)
	if(a[n1]==0&&a[n2]==0&&a[n3]==0)
	{
		a[n1]++;
		a[n2]++;
		a[n3]++;
		return 1;
	}
	return 0;
}

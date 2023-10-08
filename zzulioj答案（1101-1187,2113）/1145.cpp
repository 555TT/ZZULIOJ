#include<stdio.h>
#include<math.h>
int fun(int n,int *t)
{
	*t=-1;
	while(n>0)
	{
		(*t)++;
		if(n%10==4)
	    return 1;
		n/=10;
	}
	return 0;
}
int fun2(int t)//计算10的t次方 
{
	if(t==0)
	return 1;
	int sum=10;
	for(int j=1;j<t;j++)
	sum*=10;
	return sum;
}
int main()
{
	int n,sum=0,t,m;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		m=fun(i,&t);
		if(m==1)
		{
		   i=i+fun2(t);
		   m=fun(i,&t);
		}
		if(m==0)
		sum++;
	}
	printf("%d",sum);
	return 0;
}

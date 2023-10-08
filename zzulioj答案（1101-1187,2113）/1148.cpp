#include<stdio.h>
int main()
{
	int fun(int m,int *a);
	int b[3];
	int t[10]={0};
	int flag;
	for(int k=10;k<=31;k++)
	{
		flag=0; int t[10]={0};
	for(int i=k;flag!=3&&i<=31;i++)
	{
		if(fun(i*i,t)==1)
		{
			b[flag]=i*i;
			flag++;
		}
	}
	if(flag==3)
	break;
	}
	for(int i=0;i<3;i++)
	printf("%d\n",b[i]);
	return 0;
}
int fun(int m,int *a)
{
	int n1=m/100;
	int n2=m%100/10;
	int n3=m%10;
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

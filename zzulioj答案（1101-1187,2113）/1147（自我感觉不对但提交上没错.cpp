#include<stdio.h>
int main()
{
	int a[100],b[100];
	int n,m;
	scanf("%d%d", &n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d", a+i);
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d", b+i);
	}
	int j=-1;
	int flag=0;//flag为0则b是a的子数列
	for(int i=0;i<=n-m;i++)
	{
		if(a[i]==b[0])
		j=i;
	}
	if(j==-1)
	{
	printf("No Answer");
	return 0;
	}
	
	for(int i=0,k=j;k<=j+m-1;k++,i++)
	  {
		  if(a[k]!=b[i])
		  {
		  flag=1;
		  break;
		  }
	  } 
	   if(flag==0)
	   printf("%d",j);
	   else
	   printf("No Answer");
	return 0;
}

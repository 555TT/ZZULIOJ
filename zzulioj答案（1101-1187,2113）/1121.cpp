#include<stdio.h>
int main()
{
	int n,flag=0,a[1000], time=0;/*flag为0表示电梯第一次运行*/
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	scanf("%d", a+i);
	for(int i=0;i<n;i++)
	{
		if(flag==0)
		{
			time=a[i]*6+5;
			flag=1;
		}
		else
		{
			if(a[i]-a[i-1]>=0)
		    time=time+(a[i]-a[i-1])*6+5;
		    else
		    time+=(a[i-1]-a[i])*4+5;
		}
	}
	printf("%d", time);
	return 0;
}

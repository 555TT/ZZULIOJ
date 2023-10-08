#include<stdio.h>
int main()
{
	int n,i,h;
	scanf("%d", &n);
	for(i=1;;i=i*10)
	{
		if(n/i==0)
		{
			break;
		}
	}
	h=i/10;
	for(;h!=0;h=h/10)
	{
		printf("%d ", n/h);
		n=n%h;
	}
	return 0;
}

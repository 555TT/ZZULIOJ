#include<stdio.h>
int main()
{
	int m,n,x,y;
	scanf("%d%d", &m,&n);
	for(;m%n!=0;)
	{
		x=n;
		y=m%n;
		m=x;n=y;
	}
	printf("%d", n);
	return 0;
}

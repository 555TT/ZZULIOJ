#include<stdio.h>
int main()
{
	int m,n,m1,n1,m2;
	scanf("%d%d", &m,&n);
	m1=m;n1=n;m2=m;
		for(;m%n!=0;)
		{
			int x,y;
			x=n;
			y=m%n;
			m=x;n=y;
		}
		while(m1%n1!=0)
		{
		m1=m1+m2;
		}
		printf("%d %d", n,m1);
		return 0;
}

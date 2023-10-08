#include<stdio.h>
#include<math.h>
int main()
{
	int n, y=1;double i, m=0, a=1;
	scanf("%d", &n);
	for(i=1;i<=n;i++,a+=2, y++)
	{
		m=m+pow(-1,y-1)*(i/a);
	}
	printf("%.3f", m);
	return 0;
}

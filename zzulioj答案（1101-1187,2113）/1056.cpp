#include<stdio.h>
int main()
{
	int m, n, max=0;
	scanf("%d%d", &m,&n);
	for(;m<=n;m++)
	{
		if(m%7==0&&m%4!=0)
		{max=m;}
	}
	if(max!=0)
	printf("%d", max);
	else
	printf("no");
	return 0;
}

#include<stdio.h>
int main()
{
	int n,max=0;
	for(int i=1;;)
	{
	scanf("%d",&n);
	if(n<0)
	break;
	if(n>max)
	max=n;
	}
	printf("%d", max);
	return 0;
}

#include<stdio.h>
int main()
{
	int n,x,y,flag=0;
	scanf("%d", &n);
	for(x=0;x<=n;x++)
	{
		for(y=0;y<=n;y++)
		{
			if(15*x+9*y+(n-x-y)==3*n)
			{
			printf("%4d%4d%4d\n", x,y,n-x-y);
			flag=1;
			}
		}
	}
	if(flag==0)
	printf("No Answer");
	return 0;
}

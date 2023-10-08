#include<stdio.h>
int main()
{
	int m, n,max, flag=0;
	scanf("%d%d", &m,&n);
	for(;n>=m;n--)
	{
		if(n%7==0&&n%4!=0)
		{max=n;flag++;
		break;}
	}
	if(flag==0)
	printf("no");
	else
	printf("%d", max);
}

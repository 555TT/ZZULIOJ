#include<stdio.h>
int main()
{
	int high,up,down,day=0,sum=0;
	scanf("%d%d%d", &high,&up,&down);
	while(1)
	{
		sum+=up;
		day++;
		if(sum>=high)
		{
		break;
		}
		sum-=down;
	}
	printf("%d", day);
	return 0;
}

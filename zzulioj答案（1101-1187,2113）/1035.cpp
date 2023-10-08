#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;
	scanf("%d", &x);
	if(x<-2)
	{
		y = 7-2*x;
		printf("%d", y);
	}
	if(x>=-2&&x<3)
	{
		y = 5-abs(3*x+2);
		printf("%d", y);
	}
	if(x>=3)
		{
			y = 3*x+4;
			printf("%d", y);
		}
		return 0;
}

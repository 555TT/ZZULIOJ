#include<stdio.h>
int main()
{
	int time, command;
	int a=0, b=0, x=0, y=0;
	while(scanf("%d%d", &time, &command))
	{
		switch(a)
		{
			case 0:y+=(time-b)*10;break;
			case 1:x-=(time-b)*10;break;
			case 2:y-=(time-b)*10;break;
			case 3:x+=(time-b)*10;break;
		}
		if(command==3)
		break;
		else if(command==1)
		a++;
		else if(command==2)
		a--;
		a=(a+4)%4;
		b=time;
	}
	printf("%d %d", x, y);
	return 0;
}

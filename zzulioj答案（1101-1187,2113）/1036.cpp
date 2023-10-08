#include<stdio.h>
int main()
{
	int x, y, op;//op为标识变量，op为0时x为平年，op为1时x为闰年 
	scanf("%d%d", &x, &y);
	op = 0;
	if(x%4==0)
	{
		if(x%100!=0)
		op = 1;
		else 
		{if(x%400==0)
		op = 1;
		}
	}
	if(op == 0)
	{
		if(y==1||y==3||y==5||y==7||y==8||y==10||y==12)
		printf("31");
		else if(y == 2)
		printf("28");
		else 
		printf("30");
	}
	if(op == 1)
	{
		if(y==1||y==3||y==5||y==7||y==8||y==10||y==12)
	    printf("31");
	    else if(y == 2)
		printf("29");
	    else
		printf("30"); 
	}
	return 0;
}

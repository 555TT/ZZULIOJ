#include<stdio.h>
int HmsToS(int h, int m, int s)
{
	int sum=h*3600+m*60+s;
	return sum; 
}
void PrintTime(int s)
{
	int h, m;
    h=s/3600;
	s=s-h*3600;
	m=s/60;
	s=s-m*60;
	printf("%02d:%02d:%02d\n", h, m,s);
}

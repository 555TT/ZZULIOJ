#include<stdio.h>
int Grade_Point(int x)
{
	int m;
	if(x<60)
	m=0;
	else
	m=(x-50)/10;
	return m;
}
int main()
{
	int n, x,m, x1=0; double GPA=0;//x：学分, x1:总学分 m：成绩 
	scanf("%d", &n);
	for(;n>0;n--)
	{
		scanf("%d%d",&x,&m);
		x1+=x;
	    GPA+=Grade_Point(m)*x;
	}
	GPA=GPA/x1;
	printf("%.1f", GPA);
	return 0;
}

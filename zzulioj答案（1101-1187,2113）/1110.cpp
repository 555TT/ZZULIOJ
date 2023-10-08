#include<stdio.h>
int common(int x, int y)
{
	if(x==y)
	return x;
	else if(x<y)
	return common(x,y/2);
	else
	return common(x/2,y);
}
int main()
{
	int m,n;
	scanf("%d%d", &m,&n);
	printf("%d", common(m,n));
	return 0;
}

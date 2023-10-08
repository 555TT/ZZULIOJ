#include<stdio.h>
double fact(int x);
int main()
{
	int n,i;double sum=0;
	scanf("%d", &n);
	for(i=1;;i++)
	{
		sum+=fact(i);
		if(n<=sum)
		break;
	}
	printf("m<=%d",i-1);
	return 0;
} 
double fact(int x)
{
	if(x==1)
	return 1;
	else
	return x*fact(x-1);
}

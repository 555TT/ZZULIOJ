#include<stdio.h>
int main()
{
	int n[100]={0};
	int sum;
	while(scanf("%d", &sum),sum!=-1)
	{
		n[sum]++;
	}
	int max=0;
	for(int i=0;i<100;i++)
	{
		if(n[i]>max)
		max=n[i];
	}
	for(int i=0;i<100;i++)
	{
		if(n[i]==max)
		printf("%d ", i);
	}
	return 0;
}

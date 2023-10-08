#include<stdio.h>
int main()
{
	int n;double sum=1;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		while(sum>100)
		sum/=10;
		sum=sum*i;
	}
	while(sum>10)
	sum/=10;
	printf("%d", (int)sum);
	return 0;
}

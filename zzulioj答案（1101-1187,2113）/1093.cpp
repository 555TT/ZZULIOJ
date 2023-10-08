#include<stdio.h>
#include<math.h>
int prime(int x)
{
	int flag=1;
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
		flag=0;
	    break;
		}
	}
	if(flag==1)
	return 1;
	else
	return 0;
}
int main()
{
	int M;
	scanf("%d", &M);
	for(int i=2;i<=M/2;i++)
	{
		if(prime(i)==1&&prime(M-i)==1)
		printf("%d %d\n", i, M-i);
	}
	return 0;
}

#include<stdio.h>
int facsum (int n)
{
	int sum=0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		sum+=i;
	}
	return sum+1;
} 
int main()
{
	int m,n,a, flag=0;
	scanf("%d%d", &m, &n);
	for(;m<=n;m++)
	{
		a=facsum(m);
		if(m==facsum(a)&&a<=n&&m<a)
		{
		printf("%d %d\n", m,a);
		flag=1;
		}
	}
	if(flag==0)
	printf("No answer");
	return 0;
}

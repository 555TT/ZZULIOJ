#include<stdio.h>
int main()
{
	int n,m=1;
	scanf("%d", &n);
	for(int i=1;i<n;i++)
	{
	    m=(m+1)*2;
	}
	printf("%d", m);
	return 0;
}

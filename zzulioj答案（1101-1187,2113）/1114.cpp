#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;scanf("%d", &n);
	int *p=(int*) malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		scanf("%d", &p[i]);
	}
	for(int i=n-1;i>=0;i--)
	{
		printf("%4d", p[i]);
	}
	free(p);
	return 0;
}

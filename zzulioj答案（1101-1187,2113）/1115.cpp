#include<stdio.h>
int main()
{
	int a[1000];int n, x,min=100000;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		if(a[i]<min)
		{
		min=a[i];
		x=i;
		}
	}
	printf("%d %d", min, x);
	return 0;
}

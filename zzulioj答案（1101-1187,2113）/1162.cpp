#include<stdio.h>
#include<stdlib.h>
int main()
{
	void ringShift(int *a, int n, int k);
	int n,k;
	scanf("%d", &n);
	int *p=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		scanf("%d", p+i);
	}
	scanf("%d", &k);
	ringShift(p, n,k);
	for(int i=0;i<n;i++)
	{
		printf("%d ", p[i]);
	}
	return 0;
}
void ringShift(int *a, int n, int k)
{
	int *arr1=(int *)malloc(k*sizeof(int));
	int *arr2=(int *)malloc((n-k)*sizeof(int));
	for(int i=n-1-k+1, j=0;i<=n-1;i++,j++)
	{
		arr1[j]=a[i];
	}
	for(int i=0;i<=n-1-k;i++)
	{
		arr2[i]=a[i];
	}
	for(int i=k-1+1, j=0;i<n;i++, j++)
	{
		a[i]=arr2[j];
	}
	for(int i=0;i<k;i++)
	{
		a[i]=arr1[i];
	}
}

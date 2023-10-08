#include<stdio.h>
int main()
{
	int MinIndex(int a[], int n); 
	int MaxIndex(int a[], int n);
    void PrintArr(int a[],int n);
	int n,a[10], min, max,t;
	scanf("%d", &n);
	for(int i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	min=MinIndex(a,n);
	t=a[0];a[0]=a[min];a[min]=t;
	max=MaxIndex(a,n);
	t=a[n-1];a[n-1]=a[max];a[max]=t;
	PrintArr(a,n);
	return 0;
}
void PrintArr(int a[],int n)
{
	for(int i=0;i<=n-1;i++)
	{
		printf("%d", a[i]);
		if(i!=n-1)
		printf(" ");
	}
}
int MinIndex(int a[], int n)
{
	int min=a[0], minindex=0;
	for(int i=1;i<=n-1;i++)
	{
		if(a[i]<min)
		{
		minindex=i;
		min=a[i];
		}
	}
	return minindex;
}
int MaxIndex(int a[], int n)
{
	int max=a[0], maxindex=0;
	for(int i=1;i<=n-1;i++)
	{
		if(a[i]>max)
		{
		maxindex=i;
		max=a[i];
		}
	}
	return maxindex;
}

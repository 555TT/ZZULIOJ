#include<stdio.h>
int main()
{
	void sort(int a[], int n);
	void PrintArr(int a[],int n);
	int n,a[10];
	scanf("%d", &n);
	for(int i=0;i<=n-1;i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a,n);
	PrintArr(a,n);
	return 0;
}
void sort(int a[], int n)
{
	int t;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
		    t = a[j];a[j]=a[j+1];a[j+1]=t;
			}	
		}
	}
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

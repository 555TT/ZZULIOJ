#include<stdio.h>
int main()
{
	void insert(int a[], int n, int num);
	void PrintArr(int a[], int n);
	int n, num, a[1000];
	scanf("%d", &n);
	for(int i=0;i<=n-1;i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &num);
	insert(a, n,num);
	PrintArr(a,n);
	return 0;
}
void insert(int a[], int n, int num)
{
	for(int i=n-1;i>=0;i--)
	{
		if(num<a[i])
		{
			a[i+1]=a[i];
			if(i==0)
			a[0]=num;
		}
		else
		{
			a[i+1]=num;
			break;
		}
	}
}
void PrintArr(int a[], int n)
{
	for(int i=0;i<=n;i++)
	{
		printf("%d", a[i]);
		if(i!=n)
		printf(" ");
	}
}

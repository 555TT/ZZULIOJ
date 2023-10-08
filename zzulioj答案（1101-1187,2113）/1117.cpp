#include<stdio.h>
int main()
{
	void PrintArr(int a[], int n);
    void del(int a[], int n, int i);
    int find(int a[], int n, int x);
    int n,a[100], x, m;
	scanf("%d", &n);
	for(int i=0;i<=n-1;i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &x);
	if(find(a,n,x)==-1)
	printf("Not Found");
	else
	{
		m=find(a,n,x);
		del(a,n,m);
		PrintArr(a,n);
	} 
	return 0;
}
int find(int a[], int n, int x)
{
	int flag=0;//flag为0表示没有查找到 
	for(int i=0;i<=n-1;i++)
	{
		if(x==a[i])
		{
		return i;
		flag=1;
		break;
		}
	}
	if(flag==0)
	return -1;
}
void del(int a[], int n, int i)
{
	for(;i<=n-1;i++)
	{
		a[i]=a[i+1];
	}
}
void PrintArr(int a[], int n)
{
	for(int i=0;i<=n-2;i++)
	{
		printf("%4d", a[i]);
	}
}

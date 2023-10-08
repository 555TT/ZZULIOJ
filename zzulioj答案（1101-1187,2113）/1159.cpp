#include<stdio.h>
int main()
{
	void LargestTow(int a[],int n,int *pfirst,int *psecond);
	int a[1000], n, max, max_;
	scanf("%d", &n);
	LargestTow(a,n,&max,&max_);
	printf("%d %d",max,max_);
    return 0;
}
void LargestTow(int a[],int n,int *pfirst,int *psecond)
{
	int x;
	for(int i=0;i<n;i++)
	{
		scanf("%d", a+i);
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(*(a+j)<*(a+j+1))
			{
				x=*(a+j);*(a+j)=*(a+j+1);*(a+j+1)=x;
			}
		}
	}
	*pfirst=a[0];*psecond=a[1];
}

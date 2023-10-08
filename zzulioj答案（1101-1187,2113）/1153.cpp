#include<stdio.h>
int a[10001];
void quick_sort(int arr[],int begin,int end)
{
	if(begin>=end)
	return;
	int tmp=arr[begin];
	int i=begin,j=end;
	int t;
	while(i!=j)
	{
		while(arr[j]>=tmp&&j>i)
		j--;
		while(arr[i]<=tmp&&j>i)
		i++;
		if(j>i)
		{
			t=arr[i];
			arr[i]=arr[j];
			arr[j]=t;
		}
	}
	arr[begin]=arr[i];
	arr[i]=tmp;
	quick_sort(arr,begin,i-1);
	quick_sort(arr,i+1,end);
}
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		int sum=1,sum2=1;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",a+i);
		}
		quick_sort(a,0,n-1);
		for(int i=1;i<n;i++)
		{
			if(a[i]==a[i-1])
			sum2++;
			else
			sum2=1;
			if(sum2>sum)
			sum=sum2;
		}
		printf("%d\n",sum);
	}
	return 0;
}

#include<stdio.h>
int a[1000000],b[1000000];//要求的数组长度过大，如果定义到main函数中会出现P1的情况
int main()
{
	int m,n,i,j;
	scanf("%d",&m);
	for(i=m-1;i>=0;i--)
	{
		scanf("%d",&a[i]);
	}//将按升序排列的数组a倒序输入，从而实现数组a降序排列
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	int c[n+m];
	i=0,j=0;
	int k=0;
	while(i<m&&j<n)
	{
		if(a[i]>=b[j])
			c[k++]=a[i++];//如果a[i]>b[j],将a[i]存入数组c中，同时k+1，i+1指向数组c和数组a的下一个元素
		else
			c[k++]=b[j++];//如果a[i]<b[i],将b[i]存入数组c中，同时k+1，j+1，指向数组c和数组b的下一个元素
	}//比较数组a和数组b长度相同的部分
	while(i<m)
	{
		c[k++]=a[i++];		
	}//如果a的数组长度大于b的数组长度，将数组a剩余的数存入数组c
	while(j<n)
	{
		c[k++]=b[j++];
	}//如果b的数组长度大于a的数组长度，将数组b剩余的数存入数组c
	for(i=0;i<=n+m-1;i++)//数组a中有n个元素，数组b中有m个元素，则数组c中有m+n-1个元素
	{
		printf("%d ",c[i]);
	}//输出数组c
	return 0;
}

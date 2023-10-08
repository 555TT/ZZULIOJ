#include<stdio.h>
int judge(int n)//判断n是否含4 
{
	while(n!=0)
	{
		if(n%10==4)
		return 1;//如果含 
		else
		n=n/10;
	}
	return 0;//如果不含 
}
int main()
{
	int n;
	scanf("%d", &n);
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		if(judge(i)==0)
		sum++;
	}
	printf("%d", sum);
	return 0;
} 

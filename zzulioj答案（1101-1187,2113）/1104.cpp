#include<stdio.h>
int FacSum(int n)
{
	int sum=0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		sum+=i;
	}
	return sum+1;
} 
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", FacSum(n));
	return 0;
}

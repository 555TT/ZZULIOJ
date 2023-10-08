#include<stdio.h>
#include<math.h>
int main()
{
	int n, flag=0;
	scanf("%d", &n);
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		flag=1;
	}
	if(flag==1||n==1)
	printf("No");
	else
	printf("Yes");
	return 0;
}

#include<stdio.h>
int main()
{
	int n,t;
	while(scanf("%d",&n), n!=0)
	{
		if(n==1)
		printf("1\n");
		else if(n==2)
		printf("2\n");
		else 
		{
			int a1=1,a2=2;
		    while(n>2)
		    {
				t=a2;
				a2=a1+a2;
				a1=t;
				n--;	
			}
			printf("%d\n", a2);
		}
	}
	return 0;
}

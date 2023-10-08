#include<stdio.h>
#include<math.h>
int prime(int x)
{
	if(x==1) return 0;
	else
	{
    	int flag=1;
	    for(int i=2;i<=sqrt(x);i++)
	    { 
		 
		 	if(x%i==0)
		 	{flag=0;
		 	break;}
		}
		 if(flag==1)
		 return 1;
		 else return 0;
	     
	}
}
int main()
{
	int m,n;
	scanf("%d%d", &m,&n);
	for(;m<=n;m++)
	{
		if(prime(m)==1)
		printf("%d ", m);
	}
	return 0;
}

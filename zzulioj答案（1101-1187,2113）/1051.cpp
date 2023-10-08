#include<stdio.h>
#include<math.h>
int main()
{
	int n, i;double sum, item;
	scanf("%lf%d",&item,&n);
	sum=item;
	for(i=2;i<=n;i++)
	{
		 item=sqrt(item);
		 sum+=item;
	}
	printf("%.2f", sum);
	return 0;	 
} 

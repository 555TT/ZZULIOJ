#include<stdio.h>
int main()
{
	int a,i,m, n, p, z;n=p=z=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		scanf("%d", &m);
		if(m<0)
		n++;
		else if(m==0)
		z++;
		else if(m>0)
		p++;	
	}
	printf("%d %d %d", n, z, p);
	return 0;		
}

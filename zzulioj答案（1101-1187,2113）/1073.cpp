#include<stdio.h>
int main()
{
	int m,n,j,flag=0;
	scanf("%d%d", &m,&n);
	for(j=0;j<=m;j++)
	{
		if(j*2+(m-j)*4==n)
		{
		printf("%d %d", j, m-j);
		flag=1;
		}
	}
	if(flag==0)
	printf("No Answer");
	return 0;
}

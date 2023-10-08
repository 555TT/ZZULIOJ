#include<stdio.h>
int  main()
{
	int n,cost, m,w, flag=0;
	scanf("%d%d", &n,&cost);
	for(m=0;m<=n;m++)
	{
		for(w=0;w<=n;w++)
		{
			if(3*m+2*w+(n-m-w)==cost&&m>=0&&n>=0&&(n-m-w)>=0)
			{
				printf("%d %d %d\n", m, w, n-m-w);
				flag=1;
			}
		}
	}
	if(flag==0)
	printf("No answer");
	return 0;
}

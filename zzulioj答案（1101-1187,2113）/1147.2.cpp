#include<stdio.h>
int main()
{
	int a[100],b[100];
	int m,n;
	scanf("%d%d", &n,&m);
	for(int i=0;i<n;i++)
	scanf("%d", a+i);
	for(int i=0;i<m;i++)
	scanf("%d", b+i);
	int index,j;
	for(int i=0;i<=n-m;i++)
	{
		if(a[i]==b[0])
		{
			index=i;
			for(j=0;j<m;j++)
			{
				if(a[i+j]!=b[j])
				break;
			}
			if(j==m)
			break;
	     }
	}
	if(j==m)
		printf("%d", index);
	else
		printf("No Answer");
	return 0;
}

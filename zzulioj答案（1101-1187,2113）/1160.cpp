#include<stdio.h>
int main()
{
	void FindMax(int p[][3], int m, int n, int *pRow, int *pCol);
	int a[2][3], *pRow, *pCol;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	FindMax(a,2,3,pRow,pCol);
	return 0;
}
void FindMax(int p[][3], int m, int n, int *pRow, int *pCol)
{
	int max, i, j, flag=0;
	max=p[0][0];
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(p[i][j]>max)
			max=p[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(p[i][j]==max)
			{
				pRow=&i;pCol=&j;
			    flag=1;break;
			}
		}
		if(flag==1)
		break;
	} 
	printf("%d %d %d", max, *pRow, *pCol);
}

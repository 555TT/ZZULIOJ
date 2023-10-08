#include<stdio.h>
int narcissus(int n)
{
	int n1, n2, n3;
	n1=n/100;
	n2=(n%100)/10;
	n3=(n%100)%10;
	if(n==n1*n1*n1+n2*n2*n2+n3*n3*n3)
	return 1;
	else return 0;
} 
int main()
{   
    int m, n;
	while(scanf("%d%d", &m, &n)!=EOF)
	{
   	int flag1=0, flag2=0;//flag1为0时表示第一个水仙花数 ,为1时表示以后的水仙花数 ,flag2为0时表示没有输出数据 
	 for(;m<=n;m++)
	 {
		if(narcissus(m)==1&&flag1==0)
		{
		printf("%d", m);
		flag1=1;flag2=1;
		}
		else if(narcissus(m)==1&&flag1==1)
		{
		printf(" %d", m);flag2=1;
		}
	  }
	  if(flag2==0)
	  printf("no");
	  printf("\n");
	}
	return 0;
}

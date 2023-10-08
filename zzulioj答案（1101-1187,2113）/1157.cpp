#include<stdio.h>
#include<string.h>
void sum(char *a,int n){
	int sum1=0,flag;
	int i,j;
	for(i=0;i<strlen(a);i++)
	{
		flag=1;
		if(a[i]=='1')
		{
			for(j=i+1;j<=i+n-1&&j<strlen(a);j++)
			{
				if(a[j]=='0')
				{
					flag=0;
					break;
				}
			}
		    if(flag==1&&j==i+n)
			sum1++;	
		}
	}
	printf("%d",sum1);
} 
int main()
{
	char s[1000]={'\0'};
	int n;
	scanf("%s",s);
	scanf("%d",&n);
	sum(s,n);
	return 0;
}

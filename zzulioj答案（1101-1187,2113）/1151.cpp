#include<stdio.h>
#include<string.h>
int main()
{
	void reverse_string_2(char *str);
	char a[1000],b[1000];
	int t,m,n,min,max;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char c[1000]={0};
		int y=0;
		max=0;
		scanf("%s",a);
		getchar();
		scanf("%s",b);
		getchar();
		reverse_string_2(a);
		reverse_string_2(b);
	    m=strlen(a);
	    n=strlen(b);
		min=m<=n?m:n;
		for(int i=0;i<min;i++)
		{
			int x=a[i]+b[i]+y-2*48;
		    y=x/10;//进的数
		    if(y==0)
			c[i]=x%((y+1)*10)+48;
			else
			c[i]=x%(y*10)+48;
		}
		if(m>min)
		{
		    max=m;
		    for(int i=min;i<max;i++)
		    {
				int x=a[i]+y-48;
				y=x/10;
				if(y==0)
				c[i]=x%((y+1)*10)+48;
				else
				c[i]=x%(y*10)+48;
			}
			if(y!=0)
			c[max]=y+48;
		}
		else if(n>min)
		{
		    max=n;
		    for(int i=min;i<max;i++)
		    {
				int x=b[i]+y-48;
				y=x/10;
				if(y==0)
				c[i]=x%((y+1)*10)+48;
				else
				c[i]=x%(y*10)+48;
			}
			if(y!=0)
			c[max]=y+48;
		}
		else
		{
			if(y!=0)
			c[min]=y+48;
		}
		for(int i=strlen(c)-1;i>-1;i--)
		printf("%c",c[i]);
		printf("\n");
	}
	return 0;
}
void reverse_string_2(char *str)
{
	int len = strlen(str);
	for (int i = 0; i < len / 2; i++)
	{
	//实现字符串中对应位置字符的交换，可借鉴于数组交换
		char t = *(str+i);
		*(str + i) = *(str + len - i-1);
		*(str + len - i-1) = t;
	}
}

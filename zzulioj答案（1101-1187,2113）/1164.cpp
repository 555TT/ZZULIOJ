#include<stdio.h>
#include<string.h>
int main()
{
	char c[101];int k,len,x;
	gets(c);
	scanf("%d", &k);
	k=k%26;
	len=strlen(c);
	for(int i=0;i<len;i++)
	{
		if(c[i]>=97&&c[i]<=122||c[i]>=65&&c[i]<=90)
		{
			if(c[i]>=65&&c[i]<=90)
			{
				if(c[i]+k>90)
				{
					x=c[i]+k-90;
					printf("%c",64+x);
				}
				else
				{
					printf("%c", c[i]+k);
				}
			}
			else
			{
				if(c[i]+k>122)
				{
					x=c[i]+k-122;
					printf("%c", 96+x);
				}
				else
				{
					printf("%c", c[i]+k);
				}
			}
		}
		else 
		{
			printf("%c", c[i]);
		}
	}
	return 0;
} 

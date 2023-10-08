#include<stdio.h>
#include<string.h>
int main()
{
	char c[1000];
	int n;scanf("%d", &n);
	while(n--)
	{
		scanf("%s", c);
		int t=strlen(c);
		int sum=0;
		for(int i=0;i<t;i++)
		{
			if(c[i]>='0'&&c[i]<='9')
			sum++;
		}
		printf("%d\n",sum);
	}
	return 0;
}

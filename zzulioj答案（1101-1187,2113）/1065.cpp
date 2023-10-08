#include<stdio.h>
int main()
{
	char ch;int flag=0;
	while(scanf("%c", &ch), ch!='\n')
	{
		if(ch>=48&&ch<=57)
		flag+=1;
	}
	printf("%d", flag);
	return 0;
}

#include<stdio.h>
int main()
{
	char ch;
	int d=0;
	while(ch=getchar(), ch!='\n')
	{
		d=d*2+ch-'0';
	}
	printf("%d", d);
	return 0;
}

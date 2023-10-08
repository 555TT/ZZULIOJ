#include<stdio.h>
#include<ctype.h>
int main()
{
	char c;
	while(scanf("%c", &c),c!='@')
	{
		if(c>=65&&c<=90)
		{
		c=tolower(c);
		}
		if(c>=97&&c<=121)
		c=c+1;
		else if(c==122)
		c='a';
		printf("%c", c);
	} 
	return 0;
}

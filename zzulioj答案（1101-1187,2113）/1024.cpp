#include<stdio.h>
int main()
{
	char c;
	scanf("%c", &c);
	if(c>='a'&&c<='z')
	printf("%d", c-96);
	if(c>='A'&&c<='Z')
	printf("%d", c-64);
	return 0;
} 

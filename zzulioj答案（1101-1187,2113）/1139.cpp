#include<stdio.h>
#include<string.h>
int main()
{
	char c[1001];char c2[1001];
	int n;
	scanf("%d", &n);
	getchar();
	gets(c);
	n--;
	while(n--)
	{
		gets(c2);
		if(strlen(c)>strlen(c2))
		strcpy(c,c2);
	}
	puts(c);      
	return 0;
} 

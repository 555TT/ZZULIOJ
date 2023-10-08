#include<stdio.h>
#include<string.h>
int main()
{
	char c[101];
	int t;scanf("%d", &t);
	while(t--)
	{
		scanf("%s",c);
		int n;
		scanf("%d", &n);
		char *a=strchr(c,46);
		a+=n;
		if(a>c+strlen(c))
		printf("0");
		else
		printf("%c\n", *a);
	}
	return 0;
}

#include<stdio.h>
int len(char *sp)
{
	int sum=0;
	for(int i=0;sp[i]!='\0';i++)
	{
		if(sp[i]!=' ')
		sum++;
	}
	return sum;
}
int main()
{
	char a[100];
	gets(a);
	printf("%d", len(a));
	return 0;
}

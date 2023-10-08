#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *decimal(char *p){
	int i;
	for(i=strlen(p)-1;p[i]=='0';i--)
	{
		p[i]='\0';
	}
	for(i=0;i<strlen(p);i++)
	{
		if(p[i]=='.')
		{
			if(p[i+1]=='\0')
			return NULL;
			break;
		}
	}
	char *s=(char*)malloc(sizeof(char)*101);
	for(int j=0;p[i]!='\0';j++,i++)
	{
		s[j]=p[i];
	}
	return s;
}
int main()
{
	char s[101];
	scanf("%s",s);
	char *c=decimal(s);
    if(c==NULL)
    printf("No decimal part");
    else
    printf("0%s",c);
	return 0;
}

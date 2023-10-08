#include<stdio.h>
#include<string.h>
void word_s(char *a){
	char x=a[strlen(a)-1];
	if(x=='y')
	{
		a[strlen(a)-1]='i';
		printf("%ses",a);
	}
	else if(x=='o'||x=='s'||x=='x')
	printf("%ses",a);
	else if(x=='h')
	{
		if(a[strlen(a)-2]=='c'||a[strlen(a)-2]=='s')
		printf("%ses",a);
	}
	else
	printf("%ss",a);
}
int main()
{
	char s[20]={'\0'};
	scanf("%s",s);
	word_s(s);
	return 0;
}

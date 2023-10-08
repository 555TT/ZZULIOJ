#include<stdio.h>
#include<string.h>
int get_index(char x)
{
	int temp=0;
	if(x>='a'&&x<='z')
	{
		temp=(x-'a')*2;
		return temp;
	} 
	if(x>='A'&&x<='Z')
	{
		temp=(x-'A')*2-1;
		return temp;
	}
}
void compare(char *s1,char *s2)
{
	for(int i=0;i<strlen(s1)&&i<strlen(s2);i++)
	{
		if(get_index(s1[i])<get_index(s2[i]))
		{
		  printf("YES\n");
		  return ;
		}
		if(get_index(s1[i])>get_index(s2[i]))
		{
		  printf("NO\n");
		  return ;
		}
	}
	if(strlen(s1)<strlen(s2))
	{
	    printf("YES\n");
	    return ;
	}
	else
	printf("NO\n");
}
int main()
{
	char s1[10000]={'\0'},s2[10000]={'\0'};
	while(scanf("%s%s",s1,s2)!=EOF)
	{
		compare(s1,s2);
		memset(s1,'\0',sizeof(s1));
		memset(s2,'\0',sizeof(s2));
	}
	return 0;
}

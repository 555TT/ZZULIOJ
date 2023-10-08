#include<stdio.h>
int main()
{
	char c;int digit=0, letter=0, other=0;
	while(scanf("%c", &c), c!='\n')
	{
		if(c>='a'&&c<='z'||c>='A'&&c<='Z')
		letter+=1;
		else if(c>='0'&&c<='9')
		digit+=1;
		else
		other+=1; 
	}
	printf("letter:%d\ndigit:%d\nother:%d", letter,digit,other);
	return 0;
}

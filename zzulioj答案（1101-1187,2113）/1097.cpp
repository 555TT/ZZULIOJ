#include<stdio.h>
int getScore(char g)
{
	if(g=='A')
	return 95;
	else if(g=='B')
	return 85;
	else if(g=='C')
	return 75;
	else if(g=='D')
	return 65;
	else if(g=='E')
	return 40;
}
int main()
{
	char ch;int n=0;double sum=0;
	while(scanf("%c", &ch), ch!='\n')
	{
		n+=1;
		sum+=getScore(ch);
	}
	sum=sum/n;
	printf("%.1f", sum);
	return 0; 
}

#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	char a[20]="1010101010101010101";
	if(x!=0)	{
		for(int i=0;i<x;i++)
		printf("%c",a[i]);
	}
	else{
		printf("0");
	}
	return 0;
}

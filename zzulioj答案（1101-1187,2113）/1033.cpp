#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	if(x>=90)
	printf("A");
	if(x>=80&&x<=89)
	printf("B");
	if(x>=70&&x<=79)
	printf("C");
	if(x>=60&&x<=69)
	printf("D");
	if(x<60)
	printf("E");
	return 0;
}

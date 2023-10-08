#include<stdio.h>
int main(void)
{
	int year;
	scanf("%d", &year);
	if(year%400 == 0)
	printf("yes\n");
	else
	if(year%4 == 0 &&year%100 != 0)
	printf("yes\n");
	else
	printf("no\n");
	return 0;
}

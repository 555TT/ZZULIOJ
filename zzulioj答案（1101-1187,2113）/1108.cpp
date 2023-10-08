#include<stdio.h>
int main()
{
	 void PrintDigit(int m);
	  void PrintSpace(int m);
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		PrintSpace(n-i);
		PrintDigit(i);
		PrintSpace(n-i);
		printf("\n");
	}
	for(int i=1;i<=n-1;i++)
	{
		PrintSpace(i);
		PrintDigit(n-i);
		PrintSpace(i);
		printf("\n");
	}
	return 0;
}
 void PrintDigit(int m)
 {
 	for(int i=1;i<=m;i++)
 	printf("%d",i);
 	for(int i=m-1;i>=1;i--)
 	printf("%d", i);
 }
 void PrintSpace(int m)
 {
 	for(int i=1;i<=m;i++)
 	printf(" ");
 }

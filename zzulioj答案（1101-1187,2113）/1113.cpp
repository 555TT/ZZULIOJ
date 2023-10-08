#include<stdio.h>
int i=0;
int fib(int k)
{
	i++;
	if(k==1||k==2)
	return 1;
	else
	return fib(k-1)+fib(k-2);
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", fib(n));
	printf("递归调用了%d次", i);
	return 0;
}

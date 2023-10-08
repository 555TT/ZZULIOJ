#include<stdio.h>
int main()
{
	void psort( int *pa, int *pb,int *pc,int *pd);
	int a, b,c,d;
	scanf("%d%d%d%d" ,&a, &b,&c,&d);
	psort(&a, &b,&c,&d);
	printf("%d %d %d %d", a, b, c,d);
	return 0;
}
void psort( int *pa, int *pb,int *pc,int *pd)
{
	int t;
	if(*pa<*pb)
	{
	t=*pa;*pa=*pb;*pb=t;
	}
	if(*pb<*pc)
	{
	t=*pb;*pb=*pc;*pc=t;
	}
	if(*pc<*pd)
	{
	t=*pc;*pc=*pd;*pd=t;
	}
	if(*pa<*pb)
	{
	t=*pa;*pa=*pb;*pb=t;
	}
	if(*pb<*pc)
	{
	t=*pb;*pb=*pc;*pc=t;
	}
	if(*pa<*pb)
	{
	t=*pa;*pa=*pb;*pb=t;
	}
}

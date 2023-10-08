#include<stdio.h>
int main()
{
	int i, n,cur=1, last=1, beforelast=1;
	scanf("%d", &n);
	for(i=3;i<=n;i++)
	{
		cur=last+beforelast;
		beforelast = last;
		last = cur;
		
	}	
	printf("%d", cur);
	return 0;
}

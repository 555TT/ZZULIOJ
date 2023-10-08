#include<stdio.h>
int main()
{
	int m1, n1, t1, m2, n2, t2;;
	scanf("%d:%d:%d", &m1, &n1, &t1);scanf("%d:%d:%d", &m2, &n2, &t2);
	printf("%d", (m2-m1)*3600+(n2-n1)*60+(t2-t1)*1);
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
	int m, n;double result;
	scanf("%d%d", &m, &n);
	for(;m<=n;m++)
	{
		result=log(m);
		printf("%4d%8.4f\n", m, result);
	}
	return 0;
}

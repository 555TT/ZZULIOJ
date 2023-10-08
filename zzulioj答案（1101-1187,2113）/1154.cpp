#include <stdio.h>
#include <string.h>
#define N 1001
int main ()
{
	char ch1[N];
	scanf("%s",ch1);
	int i=0,D=0;
	for(;i < strlen(ch1); i++)
	{
		if((ch1[i]-48)>4)
		{
			ch1[i]-=1;
		}
		D = D*9 + (ch1[i]-48);
	}
	printf("%d\n",D);
	return 0;
}

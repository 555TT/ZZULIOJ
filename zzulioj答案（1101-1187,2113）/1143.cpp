#include<stdio.h>
#include<string.h>
#include<math.h>
int KToD(char str[], int k)
{
	int sum = 0;
	for (unsigned int i=0,t=strlen(str)-1;i<strlen(str);i++,t--)
	{
		sum+=((int)str[i]-48)*pow(k,t);
	}
	return sum;
}
int main()
{
	char a[32];
	int n, k;
	scanf("%d", &n);
	getchar();
	int max = -1;
	while (n--)
	{
		scanf("%s", a);
		getchar();
		scanf("%d", &k);
		getchar();
		if (KToD(a, k) > max)
			max = KToD(a, k);
	}
	printf("%d", max);
	return 0;
}

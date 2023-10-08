#include<stdio.h>
#include<string.h>
void convert(int n, char str[])
{
	if (n == 0)
		str[0] = 48;
		for (int i = 0;n!=0; i++)
		{
			str[i] = n % 2+48;
			n = n / 2;
		}
}
int main()
{
	int n; char s[100] = { 0 };
	scanf("%d", &n);
	convert(n, s);
	for (int i = strlen(s) - 1; i >= 0; i--)
		printf("%c", s[i]);
	return 0;
}

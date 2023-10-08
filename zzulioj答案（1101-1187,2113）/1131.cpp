#include<stdio.h>
#include<string.h>
int main()
{
	int a[26] = { 0 };
	char c[101];
	gets(c);
	int k=strlen(c);
	for (int i = 0; i < k; i++)
	{
		if (c[i] > 90)
			a[c[i] - 97]++;
		else
			a[c[i] - 65]++;
	}
	int max = a[0];
	for (int i = 1; i < 26; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	for (int i = 0; i < 26; i++)
	{
		if (max == a[i])
		{
			printf("%c", i + 97);
			break;
		}
	}
	return 0;
}

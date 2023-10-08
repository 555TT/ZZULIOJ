#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[200001], b[100001], c[100001]; int lena, lenb, flag;//flag为0表示否
	while (scanf("%s%s",a,b) != EOF)
	{
		lena = strlen(a), lenb = strlen(b);
		if (lena < lenb)
			flag =0;
		else
		{
			strcpy(c, a);
			strcat(a, c);
			if (strstr(a, b) != NULL)
			{
				flag = 1;
			}
			else
			{
				flag = 0;
			}
		}
		if (flag)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}

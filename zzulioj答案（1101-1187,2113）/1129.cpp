#include<stdio.h>
int f1(int y,int m)//返回某年某月的天数
{
		if (m == 1 || m == 3 || m == 5 ||  m== 7 || m == 8 || m == 10 || m == 12)
			return 31;
		else if(m==2)
		{
			if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
				return 29;
			else
				return 28;
		}
		else
		{
			return 30;
		}
}
int main()
{
	int m, n, k;
	scanf("%d-%d-%d", &m, &n, &k);
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		sum += f1(m, i);
	}
	sum += k;
	printf("%d", sum);
	return 0;
}

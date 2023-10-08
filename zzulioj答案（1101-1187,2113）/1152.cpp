#include<stdio.h>
int a[100001];
int main()
{
	int Binary_search(int* a, int x, int low, int high);
	int n, m, x;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", a + i);
	scanf("%d", &m);
	while (m--)
	{
		scanf("%d", &x);
		int k = Binary_search(a, x, 0, n - 1);
		if (k!=-1)
			printf("%d\n",k);
		else
			printf("Not found!\n");
	}
	return 0;
}
int Binary_search(int* a, int x, int low, int high)
{
	if (low > high)
		return -1;
	int m = (low + high) / 2;
	if (x == a[m])
		return m;
	else if (x < a[m])
		return Binary_search(a, x, low, m - 1);
	else
		return Binary_search(a, x, m + 1, high);
}

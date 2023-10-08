#include<stdio.h>
#include<string.h>
#include<math.h>
int bToD(char str[])
{
	int sum = 0; 
	for (int i = strlen(str) - 1,j=0; i>=0; i--,j++)
	{
		sum += (int)(str[j]-48) * pow(2,i);
	}
	return sum;
}
void quick_sort(int arr[], int begin, int end)
{
	void swap(int* a, int* b);
	if (begin > end)
		return;
	int tmp = arr[begin];
	int i = begin, j = end;
	while (i != j)
	{
		while (arr[j] >= tmp && j > i)
			j--;
		while (arr[i] <= tmp && j > i)
			i++;
		if (j > i)
			swap(arr + j, arr + i);
	}
	arr[begin] = arr[i];
	arr[i] = tmp;
	quick_sort(arr, begin, i - 1);
	quick_sort(arr, i + 1, end);
}
void swap(int* a, int* b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
int main()
{
	char s[31] = { 0 };
	int a[3];
	for (int i = 0; i < 3; i++)
	{
		scanf("%s", s);
		getchar();
		a[i] = bToD(s);
	}
	quick_sort(a, 0, 2);
	for (int i = 0; i < 3; i++)
		printf("%d ", a[i]);
	return 0;
}

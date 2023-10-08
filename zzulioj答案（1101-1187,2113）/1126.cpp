
#include<stdio.h>
int a[100][100];
int main() {
	int if1(int a[][100], int n);
	int if2(int a[][100], int n, int* p, int* q);
	int n;
	scanf("%d", &n);
	int x, y;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	}
	if (if1(a, n) == 1)
		printf("OK");
	else {
		if (if2(a, n, &x, &y) == 1)
			printf("Change bit(%d,%d)", x, y);
		else
			printf("Corrupt");
	}
	return 0;
}
int if1(int a[][100], int n) { //是布尔矩阵返回1否则返回0
	int flag1 = 0, flag2 = 0;//flag为0表示是布尔矩阵
	for (int i = 0; i < n; i++) { //判断每行
		int sum = 0;
		for (int j = 0; j < n; j++) {
			sum += a[i][j];

		}
		if (sum % 2 != 0)
			flag1 = 1;
	}
	for (int i = 0; i < n; i++) { //判断每列
		int sum = 0;
		for (int j = 0; j < n; j++) {
			sum += a[j][i];
		}
		if (sum % 2 != 0)
			flag2 = 1;
	}
	if (flag1 == 0 && flag2 == 0)
		return 1;
	else
		return 0;
}
int if2(int a[][100], int n, int *p, int *q) { //判断是否能修改为布尔矩阵
	int flag1 = 0, flag2 = 0;

	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			sum += a[i][j];
		}
		if (sum % 2 != 0) {
			*p = i;
			flag1++;
		}
	}
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			sum += a[j][i];
		}
		if (sum % 2 != 0) {
			*q = i;
			flag2++;
		}
	}
	if (flag1 == 1 && flag2 == 1)
		return 1;
	else
		return 0;
}

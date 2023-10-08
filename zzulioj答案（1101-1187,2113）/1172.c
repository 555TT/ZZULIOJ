#include<stdio.h>
#include<stdlib.h>
int fun(int m,int n){
	int *x=(int*)malloc(sizeof(int)*m*n);
	int sum=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",x+n*i+j);
			if(i==0||j==0||i==m-1||j==n-1)
			sum+=x[n*i+j];
		}
	}
	return sum;
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",fun(m,n));
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int *x= (int*)malloc(sizeof(int)*m*n);
	for(int i=0;i<m*n;i++)
	scanf("%d",x+i);
	for(int i=0;i<n;i++){
		for(int j=0;j<=(m-1)*n+i;j+=n){
			printf("%d ",x[j+i]);
		}
		printf("\n");
	}
	free(x);
	return 0;
}

#include<stdio.h>
#include<math.h>
int main(){
	void sort(int a[], int n, int (*cmp)(int x,int y));
	int CmpAsc(int x, int y);
	int CmpDec(int x, int y);
	int CmpAbsAsc(int x, int y);
	int a[10],i,n;
	int sit;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",a+i);
	scanf("%d",&sit);
	switch(sit){
		case 1:   sort(a, n, CmpAsc); break;
	    case 2:   sort(a, n, CmpDec); break;
	    case 3:   sort(a, n, CmpAbsAsc);break;
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
int CmpAsc(int x, int y){
	if(x>y)
	return 1;
	else
	return 0;
}
int CmpDec(int x, int y){
	if(x<y)
	return 1;
	else
	return 0;
}
int CmpAbsAsc(int x, int y){
	if(abs(x)>abs(y))
	return 1;
	else
	return 0;
}
void sort(int a[], int n, int (*cmp)(int x,int y)){
	int i,j,t;
	for(i=1;i<n;i++){
		for(j=0;j<n-1;j++){
			if((*cmp)(a[j],a[j+1])){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}

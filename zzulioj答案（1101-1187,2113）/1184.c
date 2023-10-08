#include<stdio.h>
#include<stdlib.h>
struct point{
	int x;
	int y;
};
int main(){
	struct point *a,temp;
	int n;
	scanf("%d",&n);
	a=(struct point*)malloc(sizeof(struct point)*n);
	for(int i=0;i<n;i++)
	scanf("%d%d",&a[i].x,&a[i].y);
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(a[j].x>a[j+1].x){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			else if(a[j].x==a[j+1].x){
				if(a[j].y>a[j+1].y){
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
	}
	for(int i=0;i<n;i++)
	printf("(%d,%d) ",a[i].x,a[i].y);
	printf("\n");
	for(int i=n-1;i>-1;i--)
	printf("(%d,%d) ",a[i].x,a[i].y);
	free(a);
	return 0;
}

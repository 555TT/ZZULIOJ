#include<stdio.h>
typedef struct lollipop{
	double x;
	int y;
}LOLL;
int main(){
	int m,n;
	scanf("%d%d",&n,&m);
	LOLL a[10],t;
	for(int i=0;i<m;i++)
	scanf("%lf%d",&a[i].x,&a[i].y);
	double sum=0;
	for(int i=1;i<m;i++){
		for(int j=0;j<m-i;j++){
			if(a[j].x>a[j+1].x){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	int s=0,i=0;
	while(s<n){
		if(a[i].y+s<n){
			sum+=a[i].x*a[i].y;
			s+=a[i].y;
			i++;
		}
		else{
			sum+=a[i].x*(n-s);
			s+=(n-s);
		}
	}
	printf("%.2lf\n",sum);
	return 0;
}

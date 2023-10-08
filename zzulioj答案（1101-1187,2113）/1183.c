#include<stdio.h>
struct point{
	int x;
	int y;
	int sum;
};
int main(){
	int n,i,j;
	struct point s[10],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&s[i].x,&s[i].y);
		s[i].sum=s[i].x*s[i].x+s[i].y*s[i].y;
	}
	for(i=1;i<n;i++){
	for(j=0;j<n-i;j++){
		if(s[j].sum>s[j+1].sum){
			temp=s[j];
			s[j]=s[j+1];
			s[j+1]=temp;
		}
	}
	}
	for(i=0;i<n;i++)
	printf("(%d,%d) ",s[i].x,s[i].y);
	return 0;
}

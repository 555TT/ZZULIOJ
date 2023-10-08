#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student{
	char num[13];
	char name[21];
	int x;
	int y;
	int z;
}student;
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	student *a,new;
	a=(student*)malloc(sizeof(student)*(n+1));
	for(int i=0;i<n;i++){
		scanf("%s%*c%s%d%d%d",a[i].num,a[i].name,&a[i].x,&a[i].y,&a[i].z);
		getchar();
	}
	scanf("%s%*c%s%d%d%d",new.num,new.name,&new.x,&new.y,&new.z);
	int flag=0;
	for(int i=0;i<n-1;i++){
		if(strcmp(a[i].num,new.num)<0&&strcmp(a[i+1].num,new.num)>0){
			for(int j=n-1;j>i;j--){
				a[j+1]=a[j];
			}
			a[i+1]=new;
			flag=1;
		}
	}
	if(strcmp(a[0].num,new.num)>0){
		for(int i=n-1;i>-1;i--){
			a[i+1]=a[i];
		}
		a[0]=new;
		flag=1;
	}
	if(strcmp(a[n-1].num,new.num)<0){
		a[n]=new;
		flag=1;
	}
	if(flag==0)
	printf("error!\n");
	else
	for(int i=0;i<=n;i++)
	printf("%s %s %d %d %d\n",a[i].num,a[i].name,a[i].x,a[i].y,a[i].z);
	free(a);
	return 0;
}

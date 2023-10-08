#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student{
	char num[13];
	char name[21];
	int s1;
	int s2;
	int s3;
}student;
int main(){
	int n;
	scanf("%d",&n);
	student *a;
	a=(student*)malloc(sizeof(student)*n);
	getchar();
	for(int i=0;i<n;i++){
		scanf("%s%*c%s%d%d%d",a[i].num,a[i].name,&a[i].s1,&a[i].s2,&a[i].s3);
		getchar();
	}
	char num1[21]={0};
	int flag=0;
	scanf("%s",num1);
	for(int i=0;i<n;i++){
		if(strcmp(num1,a[i].num)==0){
			printf("%s %s %d %d %d\n",a[i].num,a[i].name,a[i].s1,a[i].s2,a[i].s3);
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("Not Found\n");
	free(a);
	return 0;
}

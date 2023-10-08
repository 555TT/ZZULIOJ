#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student{
	char num[13];
	char name[21];
	int x;
	int y;
	int z;
} STU;
int main(){
	STU *s,new;
	int n;
	scanf("%d",&n);
	getchar();
	s=(STU*)malloc(sizeof(STU)*n);
	for(int i=0;i<n;i++){
	scanf("%s%*c%s%d%d%d",s[i].num,s[i].name,&s[i].x,&s[i].y,&s[i].z);
	getchar();
	}
	scanf("%s",new.num);
	int flag=0;
	for(int i=0;i<n;i++){
		if(strcmp(new.num,s[i].num)==0){
			flag=1;
			for(int j=i;j<n-1;j++){
				s[j]=s[j+1];
			}
		}
	}
	if(flag==0)
	printf("error!\n");
	else
	for(int i=0;i<n-1;i++)
	printf("%s %s %d %d %d\n",s[i].num,s[i].name,s[i].x,s[i].y,s[i].z);
}

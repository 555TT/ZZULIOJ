#include<stdio.h>
typedef struct student{
	char num[13];
	char name[21];
	int score1;
	int score2;
	int score3;
}STUDENT;
int main(){
	STUDENT s[100];
	int n,first=-1,firstnum=-1;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		scanf("%s%*c%s%d%d%d",s[i].num,s[i].name,&s[i].score1,&s[i].score2,&s[i].score3);
		getchar();
		if(s[i].score1+s[i].score2+s[i].score3>firstnum){
			first=i;
			firstnum=s[i].score1+s[i].score2+s[i].score3;
		}
	}
	printf("%s %s %d %d %d\n",s[first].num,s[first].name,s[first].score1,s[first].score2,s[first].score3);
	return 0;
}

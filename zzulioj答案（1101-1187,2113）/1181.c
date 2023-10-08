#include<stdio.h>
typedef struct information{
	char name[21];
	int year;
	int mon;
	int day;	
}infor;
int fun(infor m,infor n){
	if(m.year>n.year){
	return 1;
	}
	else if(m.year<n.year)
	return -1;
	else if(m.year==n.year){
    if(m.mon>n.mon){
		return 1;
	}
	else if(m.mon<n.mon)
	return -1;
	else if(m.mon==n.mon){
	if(m.day>n.day)
		return 1;
		else if(m.day<n.day)
		return -1;
	else
	return 0;
	}
	}
}
int main(){
	infor s[10];
	int n,mindex=0;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		scanf("%s%d%d%d",s[i].name,&s[i].year,&s[i].mon,&s[i].day);
		getchar();
		if(fun(s[i],s[mindex])==1)
		mindex=i;	
	}
	printf("%s %d-%02d-%02d\n",s[mindex].name,s[mindex].year,s[mindex].mon,s[mindex].day);
	return 0;
}

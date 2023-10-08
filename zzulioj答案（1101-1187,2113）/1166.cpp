#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *rounding(char *p){
	int i=0,j=0;
	char *a=(char*)malloc(sizeof(char)*101);
	while(p[i]=='0')
	i++;
	for(;p[i]!='.'&&i<strlen(p);i++){
		a[j++]=p[i];
	}
	if(a[0]=='\0'){
		a[0]='0';
		memset(a+1,'\0',sizeof(a)-1);
	}
	return a;
}
int main(){
	char c[101]={'\0'};
	scanf("%s",c);
	char *a=rounding(c);
	printf("%s\n",a);
	return 0;
}

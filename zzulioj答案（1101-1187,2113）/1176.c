#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void find(char *name[], int n, int *p){
	int i=1;
	*p=0;
	while(i<n){
		if(strcmp(name[i],name[*p])>0)
		*p=i;
		i++;
	}
}
int main(){
	char str[6]={0},*s[100];
	int i=0,p;
	while(gets(str),strcmp(str,"*****")!=0){
		s[i]=(char*)malloc(sizeof(char)*strlen(str));
		strcpy(s[i++],str);
	}
	find(s,i,&p);
	printf("%s",s[p]);
	for(int j=0;j<i;j++)
	free(s[j]);
	return 0;
}

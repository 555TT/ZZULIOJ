#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void maxLenStr(char *str[], int n, int *max){
	*max=0;
	for(int i=1;i<n;i++){
		if(strlen(str[i])>strlen(str[*max]))
		*max=i;
	}
}
int main(){
	char *str[100],s[80];
	int max,i;
	for(i=0;;i++){
		gets(s);
		if(strcmp(s,"****")==0)
		break;
		str[i]=(char*)malloc(sizeof(char)*strlen(s));
		strcpy(str[i],s);
	}
	maxLenStr(str,i,&max);
	printf("%s",str[max]);
	return 0;
} 

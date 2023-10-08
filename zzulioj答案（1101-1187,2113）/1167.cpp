#include<stdio.h>
#include<string.h>
void reverse(char *str){
	int i=strlen(str)-1;
	while(str[i]=='0'){
		i--;
	}
	int j=0;
	if(str[j]=='-')
	j++;
	char t;
	while(j<i){
		t=str[j];
		str[j]=str[i];
		str[i]=t;
		j++;
		i--;
	}
} 
int main(){
	char c[101]={'\0'};
	scanf("%s",c);
	reverse(c);
	printf("%s\n",c);
	return 0;
}

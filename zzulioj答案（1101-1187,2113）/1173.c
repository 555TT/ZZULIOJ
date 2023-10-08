#include<stdio.h>
#include<string.h>
void decrypt(char *cipher, char *plain){
	int t;
	for(int i=0,j=0;i<=strlen(cipher)-1;i+=2){
	t=(cipher[i]-48)*10+(cipher[i+1]-48)+24;
	plain[j++]=t;
	}
}
int main(){
	char s[200]={0},t[200]={0};
	gets(s);
	decrypt(s,t);
	printf("%s",t);
	return 0;
}

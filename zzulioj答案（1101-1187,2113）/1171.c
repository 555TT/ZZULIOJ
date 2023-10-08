#include<stdio.h>
#include<string.h>
void encrypt(char *plain, char *cipher){
	int m=strlen(plain)-1;
	for(int i=0;m>=0;m--){
	cipher[i]=(plain[m]-24)%10+48;
	i++;
	cipher[i]=(plain[m]-24)/10+48;
	i++; 
}
}
int main(){
	char s[200],x[400]={0};
	gets(s);
	encrypt(s,x);
	printf("%s",x);
	return 0;
}

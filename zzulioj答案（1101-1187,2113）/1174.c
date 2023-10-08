#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int greater(char *s1, char *s2){
	int i=0,j=0,sum1=0,sum2=0;
	sum1=strlen(s1),sum2=strlen(s2);
	if(sum1>sum2)
	return 1;
	else if(sum1<sum2)
	return -1;
	for(;i<strlen(s1);i++){
		if(s1[i]>s2[i])
		return 1;
		else if(s1[i]<s2[i])
		return -1;
	}
	return 0;
}
char* fun(char *str){
	for(int i=0;i<strlen(str);i++){
		if(str[i]!='0'||str[i]=='0'&&str[i+1]=='\0')
		return (str+i);
	}
}
int main(){
	char *s[10],str[101]={0},*t=NULL;
	int n;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		gets(str);
		t=fun(str);
		s[i]=(char*)malloc(sizeof(char)*(strlen(t)+1));
		strcpy(s[i],t);
	}
    for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(greater(s[j],s[j+1])>0)
			{
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
			}
		}
	} 
	for(int i=0;i<n;i++){
		printf("%s\n",s[i]);
	}
	for(int i=0;i<n;i++)
	free(s[i]);
	return 0;
}

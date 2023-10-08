#include<stdio.h>
#include<string.h>
int main(){
	char str[30001]={0},s[1001][31]={0};
	int n,sum,i,j;
	while(gets(str),strcmp(str,"#")!=0){
		sum=0;
		n=strlen(str);
		for(i=0;i<n;i++){
			if(str[i]==' ')
			continue;
			for(j=0;str[i]!=' '&&str[i]!='\0';j++){
				s[sum][j]=str[i++];
			}
			s[sum][j]='\0';
			sum++;
		}
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(strcmp(s[i],s[j])==0&&s[i][0]!='\0'){
					sum--;
					s[i][0]='\0';
				}
			}
		}
		printf("%d\n",sum);
		memset(s,0,sizeof(s));
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
int cmp(char *a,char *b){
	int m=strlen(a),n=strlen(b);
	if(m>n)
	return 1;
	else if(m<n)
	return -1;
	else{
		for(int i=0;i<m;i++){
			if(a[i]>b[i])
			return 1;
			else if(a[i]<b[i])
			return -1;
		}
		return 0;
	}
}
int main(){
	char a[100],b[100],c[100];
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",c);
	char *p[3]={a,b,c},*x;
	for(int i=1;i<3;i++){
		for(int j=0;j<3-i;j++){
			if(cmp(p[j],p[j+1])==1)
			{
				x=p[j];
				p[j]=p[j+1];
				p[j+1]=x;
			}
		}
	}
	for(int i=0;i<3;i++)
	printf("%s\n",p[i]);
	return 0;
}

#include<stdio.h>
#include<string.h>
#include<math.h>
double fun(char *str){
	int flag=0,i,j=0,x;
	double sum=0;
	for(i=strlen(str)-1;str[i]!=' ';i--){
		if(str[i]=='.'){
		flag=1;//如果有小数点将flag置为1 
		x=i;//x是小数点所在位置的下标 
		}
	}
	i++;//将i下标移到最后一个空格的下一位 
	if(flag==1){//存在小数点 
		int n=x-1;//将n置为小数点的前一位 
		while(str[n]!=' '){
			sum+=(str[n]-48)*pow(10,j);
			n--,j++;
		}
		n=x+1,j=-1;//将n置为小数点的后一位 
		while(n<strlen(str)){
			sum+=(str[n]-48)*pow(10,j);
			n++,j--;
		}
	}
	else{//不存在小数点 
		int t=strlen(str)-1;
		while(i<=t){
			sum+=(str[t]-48)*pow(10,j);
			t--,j++;
		}
	}
	return sum;
}
int main()
{
	int ncase,n;
	double sum;
	char c[200]={'\0'};
	scanf("%d",&ncase);
	while(ncase--)
	{
		sum=0;
		scanf("%d",&n);
		getchar();
		while(n--){
			gets(c);
			sum+=fun(c);
			memset(c,'\0',sizeof(char)*200);//将字符串c置为空，对下一次输入的字符串造成干扰 
		}
		printf("%.1lf\n",sum);
	}
}

#include<stdio.h>
#define SWAP(a, b, t) t=a; a=b; b=t;
int main(){
	char s[4],c;
	for(int i=0;i<3;i++)
	scanf("%c%*c",s+i);
	for(int i=1;i<3;i++){
		for(int j=0;j<3-i;j++){
			if(s[j]<s[j+1])
			{
				SWAP(s[j],s[j+1],c);
			}
		}
	}
	for(int i=0;i<3;i++)
	printf("%c ",s[i]);
	return 0;
}

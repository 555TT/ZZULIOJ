#include<stdio.h>
int main()
{
	char c1,c2,c3,c;
	while(scanf("%c%c%c",&c1,&c2,&c3)!=EOF)
	{
		getchar();
        if(c1>c2)
        {
			c=c1;c1=c2;c2=c;
		}
		if(c2>c3)
		{
			c=c2;c2=c3;c3=c;
		}
		if(c1>c2)
	    {
			c=c1;c1=c2;c2=c;
		}
		printf("%c %c %c\n",c1,c2,c3);
	}
	return 0;
}

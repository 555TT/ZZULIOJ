#include<stdio.h>
int main()
{
	int day=0, m, k, flag=0;
	scanf("%d%d", &m, &k);
	while(m>0)
	{
		m-=1;
		day+=1;
		flag+=1;
		if(flag==k)
		{
			m+=1;
			flag=0;
		}
	}
	printf("%d", day);
	return 0;
}

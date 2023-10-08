#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c, x, y, z;
	scanf("%d%d%d", &a, &b, &c);
	x = abs(a); y = abs(b); z = abs(c);
	if(x>=y)
	{
		if(x>=z)
		printf("%d", a);
		else 
		printf("%d", c);
	}
	else
	{
		if(y>=z)
		printf("%d", b);
		else
		printf("%d", c);
	}
	return 0;
}	

#include<stdio.h> 

int main(void)
{
	int x, y, z, t;
    
    scanf("%d%d%d", &x, &y, &z);
    
	if(y>x)
	{
		t = y; y = x; x = t;
	}
	
	if(z>x)
	{
		t = z; z = x; x = t;
	}
	
	if(z>y)
	{
		t = z; z = y; y = t;
	}
	printf("%d %d %d", x, y, z);
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
	int inverse(int n);
	int m;
	scanf("%d", &m);
	printf("%d", inverse(m)+m);
	return 0;
} 
int inverse(int n)
{
	int h,a,sum=0;
	h=(int)log10(n)+1;
	for(int i=1;i<=h;i++)
	{
		a=n%10;
		sum+=a*pow(10,(h-i));
		n=n/10;
	}
	return sum;
}

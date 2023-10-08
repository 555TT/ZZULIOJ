double funF(double x)
{
	double a, b;
	a=x-3;b=x+1;
	if(a<0)
	a=3-x;
	if(b<0)
	b=-(x+1);
	return a+b;
}
double funG(double x)
{
	return x*x-3*x;
}

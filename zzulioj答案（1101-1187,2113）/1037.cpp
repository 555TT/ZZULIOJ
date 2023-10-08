 #include<stdio.h>
 #include<math.h>
 int main()
 {
 	double x, y; char op;
 	scanf("%lf %c %lf", &x, &op, &y);
 	if(op=='+')
 	{
	 	printf("%.2f", x+y);
	 }
	 else if(op=='-')
	  	{
	 	 	printf("%.2f", x-y);
	 	 }
	 else if(op=='*')
		   	{
		  	 	printf("%.2f", x*y);
		  	 }
	 else if(op=='/')
			     {
			     	if(fabs(y)<1e-10)
			     	printf("Wrong input!");
			     	else
			   	 	printf("%.2f", x/y);
			   	 }
	else 
	printf("Wrong input!");
	return 0;		   	 
 }

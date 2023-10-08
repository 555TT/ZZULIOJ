#include<stdio.h>
int main()
{
 int heads=98, feet=386, i;
 for(i = 0; i <= heads; i++)
 {
  if  (feet == 2 * i + 4 * (heads - i))
  printf("%d %d", i, heads-i);
 } 
  return 0;
} 

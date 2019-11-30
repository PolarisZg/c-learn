#include<stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d",&a);
	c=a%101!=0;
	b=(a/101+c)*1111;
	
	printf("%d,%d",a,b);
 } 

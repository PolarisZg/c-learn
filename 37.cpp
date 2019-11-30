#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",a);
	c=a/100;
	b=(a-100*c)/10;
	a=a-100*c-10*b;
	a=a*100+b*10+c;
	printf("1",b);
	return 0;
}

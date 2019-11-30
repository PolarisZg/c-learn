#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&c);
    b=a%100;
    a=a/100;
    b=b+c;
    if (b>=0)
    {
		a=a+b/60;
    	b=b%60;
    	c=a*100+b;
    	printf("%d",c);
	}
	else
	{
		while (b<0)
		{a=a-1;
		b=b+60;}
		c=a*100+b;
		printf("%d",c);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int x,y,a,b,c;
	y=0;
	for(x=101;x<200;x++)
	{
		a=x/100;
		b=(x/10)%10;
		c=x%10;
		if(x%2==0&&a!=b&&b!=c&&a!=c)
		{
			y=y+1;
			printf("%6d",x);
  			if(y%10==0) printf("\n");
		}
	}
	return 0;
}


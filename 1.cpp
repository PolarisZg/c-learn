#include <stdio.h>
int main()
{
	int a,b,c,n,i;
	i=0;
	for(n=102;n<199;n++)
	{
		a=n/100;
		c=n%10;
		b=(n-a*100)/10;
		if(c%2==0&&a!=b&&b!=c&&c!=a)
		{
			i=i+1;
			if(i%10!=0) printf("%6d",n);
			else printf("%d\n",n);	
		}
	}
	return 0;
}

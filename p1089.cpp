#include<stdio.h>
int main()
{
	int x,y,t,k,n,a;
	y=0;
	a=0;
	k=0;
	n=1;
	while(n<=12)
	{
		scanf("%d",&x);
		y=300+y-x;
		if(y<0)
		{
		if(t>=0) t=0-n;
		else t=t;
		} 
		else 
		{
			a=a+(y/100)*100;
			y=y%100;
		}
		n=n+1;
	}
	if (t>=0) 
	{
		a=a+a*0.2+y;
		printf("%d",a);
	}
	else printf("%d",t);
	return 0;
}

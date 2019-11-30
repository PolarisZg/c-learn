#include<stdio.h>
int main()
{
	int i,x1,x2,y,t,n;
	t=0;
	n=0;
	i=1;
	while(i<=7)
	{
		scanf("%d %d",&x1,&x2);
		y=x1+x2;
		if(y>t)
		{
			t=y;
			n=i;
		}
		else{
			t=t;
			n=n;
		}
		i=i+1;
	}
	if(t>8){
		printf("%d",n);
	}
	else{
		printf("0");
	}
	return 0;
}

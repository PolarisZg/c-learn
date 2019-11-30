#include <stdio.h>
int main()
{
	int n,x1,y1,t1,x2,y2,t2,x3,y3,t3,min;
	scanf("%d%d%d%d%d%d%d",&n,&x1,&y1,&x2,&y2,&x3,&y3);
	t1=(n/x1+(n%x1!=0))*y1;
	t2=(n/x2+(n%x2!=0))*y2;
	t3=(n/x3+(n%x3!=0))*y3;
	if(t1>t2)
	{
		if(t2>t3) min=t3;
		else min=t2;
	}
	else
	{
		if(t1>t3) min=t3;
		else min=t1;
	}
	printf("%d",min);
	return 0;
}

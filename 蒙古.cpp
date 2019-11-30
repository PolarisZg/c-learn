//3:向左，2：向右，1；向前,0：不动。 
#include<stdio.h>
int main()
{
	int x0,y0,x1,y1,x2,y2;
	int i,j,k; 
	int n; 
	int c[20]={0};//读取n中的数字。 
	int x[20]={0};
	int y[20]={0};
	scanf("%d",&n); 
	for(k=0;k<20;k++)
	{
		c[k]=n%10;
		n=n/10;
	}
	x0=0;	y0=0;
	x1=0;	y1=0;
	x2=0;	y2=0;
	for(k=19;k>=0;k--)
	{
		switch(c[k])
		{
			case 1:
				if(x1-x0==0&&y1-y0==1)
					{x2=x1; y2=y1+1;}
				else if(x1-x0==1&&y1-y0==0)
					{x2=x1+1;y2=y1;}
				else if(x1-x0==-1&&y1-y0==0)
					{x2=x1-1;y2=y1;}
				else if(x1-x0==0&&y1-y0==-1)
					{x2=x1;y2=y1-1;}
				else {x2=x1;y2=y1+1;}
				x0=x1; y0=y1; x1=x2; y1=y2;
				x[k]=x1; y[k]=y1;
				break;
			case 2:
				if(x1-x0==0&&y1-y0==1)
					{x2=x1+1; y2=y1;}
				else if(x1-x0==1&&y1-y0==0)
					{x2=x1;y2=y1-1;}
				else if(x1-x0==-1&&y1-y0==0)
					{x2=x1;y2=y1+1;}
				else if(x1-x0==0&&y1-y0==-1)
					{x2=x1-1;y2=y1;}
				else {x2=x1+1;y2=y1;}
				x0=x1; y0=y1; x1=x2; y1=y2;
				x[k]=x1; y[k]=y1;
				break;
			case 3:
				if(x1-x0==0&&y1-y0==1)
					{x2=x1-1; y2=y1;}
				else if(x1-x0==1&&y1-y0==0)
					{x2=x1;y2=y1+1;}
				else if(x1-x0==-1&&y1-y0==0)
					{x2=x1;y2=y1-1;}
				else if(x1-x0==0&&y1-y0==-1)
					{x2=x1+1;y2=y1;}
				else {x2=x1-1;y2=y1;}
				x0=x1; y0=y1; x1=x2; y1=y2;
				x[k]=x1; y[k]=y1;
				break;
			case 0:
				x0=x1; y0=y1; x1=x2; y1=y2;
				x[k]=x1; y[k]=y1;
				break;
				
		}
	}
	printf("一开始在0，0处，面向y轴\n最后坐标是：%d,%d\n过程:\n",x1,y1);
	for(k=19;k>=0;k--)
	{
		if(x[k]!=0||y[k]!=0)
		{
			printf("%d,%d\n",x[k],y[k]);
		}
	}
	return 0;
} 

#include <stdio.h>
int main()
{
	int i,n,k,x,y;
	x=8;
	i=1;
	while(i<10)
	{
		while(i<10)
		{
			y=x;
			while(x!=0)
			{
				printf("       ");
				x=x-1;
			}
				x=y-1;
				n=i;
				while(n>0)
				{
					k=n*i;
					printf("%dX%d=%-3d",i,n,k);
					n=n-1;
				}
				n=1;
				while(n<=i)
				{
					k=n*i;
					if(k>10) printf(" %d=%dX%d",k,n,i);
					else printf("  %d=%dX%d",k,n,i);
					n=n+1;
				}
				printf("\n");
				i=i+1;
		}
	}
	return 0;
 } 

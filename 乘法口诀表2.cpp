#include <stdio.h>
int main()
{
	int i,n,k,x;
	x=0;
	i=9;
	while(i<10)
	{
		while(i>0)
		{
			x=9-i;
			while(x>0)
			{
				printf("       ");
				x=x-1;
			}
				n=i;
				while(n>0)
				{
					k=n*i;
					printf("%dX%d=%-3d",n,i,k);
					n=n-1;
				}
				printf("\n");
				i=i-1;
		}
	}
	return 0;
 } 

#include <stdio.h>
void PrintN( int N );
int main()
{
	int n,a,t;
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		t=a-n+1;
		printf("%d ",t);
		n=n-1;
	}
	return 0;
 } 

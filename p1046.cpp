#include<stdio.h>
int main()
{
	int a[11],i,n;
	n=0;
	for(i=0;i<11;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[10]>=a[i])
		n=n+1;
	}
	printf("%d",n);
	return 0;
 } 

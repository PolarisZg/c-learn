#include<stdio.h>
int main()
{
	int a[1001]={0},l,m,i,x,y,k,n;
	scanf("%d%d",&l,&m);
	for(i=1;i<=l;i++)
		a[i]=1;
	for(i=1;i<=m;i++)
	{
		scanf("%d%d",&x,&y);
		for(k=x;k<=y;k++)
		{
			a[k]=0;
		}
	}
	n=0;
	for(i=0;i<=l;i++)
		n=n+a[i];
	printf("%d",n);
	return 0;
} 

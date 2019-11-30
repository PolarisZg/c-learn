#include<stdio.h>
int main()
{
	int n,x,t,k,s,z;
	scanf("%d %d",&n,&x);
	s=0;
	z=n;
	while(z>0)
	{
		t=1;
		n=z;
		while(t!=0)
		{
			t=n/10;
			k=n%10;
			n=t;
			if(k==x) s=s+1;
			else s=s;
		}
		z=z-1;
	}
	printf("%d",s);
	return 0;
}

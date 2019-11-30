#include <stdio.h>
int main()
{
	int a;
	float b;
	scanf("%d",&a);
	if(a>=0&&a<=150)
	{
		b=a*0.4463;
		printf("%.1f",b);
	}
	else if(a>=151&&a<=400)
	{
		b=150*0.4463+(a-150)*0.4663;
		printf("%.1f",b);
	}
	else
{
	b=150*0.4463+250*0.4663+(a-400)*0.5663;
	printf("%.1f",b);
	return 0;}
 } 

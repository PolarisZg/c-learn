#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[4][3]={0};
	int i,j;
	int *p;
	for(i=0;i<4;i++)
		for(j=0;j<3;j++)
			*p[i][j]=a[i][j];
	printf("%d",sizeof(*p)/sizeof(*p[0]));
}

/*�Ҹо������Ӧ��������aȻ���������Ĺ�ʽ�������ƽ����*/
#include<stdio.h>
int main()
{
	float x, y, a;//x��y�ֱ��ָx n+1��x n
	scanf_s("%f",&a);
	x = a / 2;
	y = 0.5 * (x + a * 1.0 / x);
	while ((y-x)>1e-5||(x-y)>1e-5)
	{
		x = y;
		y = 0.5 * (x + a * 1.0 / x);
	}
	printf("%f",x);
	return 0;
}
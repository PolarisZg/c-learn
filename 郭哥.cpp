/*我感觉这道题应该是输入a然后用所给的公式求出啊的平方根*/
#include<stdio.h>
int main()
{
	float x, y, a;//x，y分别代指x n+1和x n
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
#include <stdio.h>
#include <math.h>
{
	int n, i, k, x, a, b��c ; //n�����������i�Ǵ�2�ܵ�����n��k�Ǹ���n��x���ж�i�Ƿ���n��������a����Ϊ��ֹѭ��������b��ͳ��ָ��,cͳ�����������ĸ���
	scanf("%d", &n);
	if (n == 1) printf("1");
	else
	{
		k = sqrt(n);
		for(i=2;i<=k;i++)
		{
			c = c + 1;
			a = 0;
			b = 0;
			while (a = 0)
			{
				x = n % i;
				if (x = 0)
					n = n / i;
				else
				{
					a = a + 1;
					c = c - 1;
				}
				b = b + 1;
			}
			if (b > 2) break;
		}
		if (b > 2) printf("0");
		else if (c % 2 == 0) printf("1");
		else printf("-1");
	}
	return 0;
}
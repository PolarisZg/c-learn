#include <stdio.h>
#include <math.h>
{
	int n, i, k, x, a, b，c ; //n是输入的数，i是从2跑到根号n，k是根号n，x：判断i是否是n的因数，a、作为终止循环的数，b是统计指数,c统计素数因数的个数
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
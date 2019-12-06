#include<stdio.h>
int main()
{
	char a[100];
	int b[100];
	int c[400] = { 3 };
	int i, j, k;
	int n;
	for (i = 0;1; i++)
	{
		a[i] = getchar();
		if (a[i] == '\n')
			break;
	}
	k = i;
	for (j = 0; j < k; j++)
		b[j] = (int)(a[j] - '0'); 
	j = 0;
	while (1)
	{
		for (i = 0; i < k; i++)
		{
			if (i != (k - 1))
			{
				b[i + 1] = (b[i] % 2) * 10 + b[i + 1];
				b[i] = b[i] / 2;
			}
			else
			{
				c[j] = b[i] % 2;
				b[i] = b[i] / 2;
			}
		}
		n = 0;
		for (i = 0; i < k; i++)
			n = n + b[i];
		if (n == 0)
			break;
		j = j + 1;
	}
	for (i = j; i >= 0; i--)
		printf("%d", c[i]);
	return 0;
}
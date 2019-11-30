#include <stdio.h>
int main()
{
	int x, n, s, t;
	t = 1;
	s = 0;
	scanf("%d %d", &x, &n);
	while (t <= n)
	{
		x = x % 7;
		if (x != 0 && x != 6)
			s = s + 250;
		else
			s = s;
		x = x + 1;
		t = t + 1;
	}
	printf("%d", s);
	return 0;
}

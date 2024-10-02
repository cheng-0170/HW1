#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 0, b = 0, c = 0;
	printf("叫块计");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b)
	{
		if (a > c)
		{
			if (c > b)
				printf("%d琌程%d程", a, b);
			else
				printf("%d琌程%d程", a, c);

		}
		else
			printf("%d琌程%d琌程", c, b);
	}
	else
	{
		if (b > c)
		{
			if (a > c)
				printf("%d琌程%d程", b, c);
			else
				printf("%d琌程%d程", b, a);

		}
		else
			printf("%d琌程%d琌程", c, a);

	}
}
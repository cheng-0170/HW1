#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 0, b = 0, c = 0;
	printf("�п�J�T�ӼƦr");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b)
	{
		if (a > c)
		{
			if (c > b)
				printf("%d�O�̤j��%d�̤p��", a, b);
			else
				printf("%d�O�̤j��%d�̤p��", a, c);

		}
		else
			printf("%d�O�̤j��%d�O�̤p��", c, b);
	}
	else
	{
		if (b > c)
		{
			if (a > c)
				printf("%d�O�̤j��%d�̤p��", b, c);
			else
				printf("%d�O�̤j��%d�̤p��", b, a);

		}
		else
			printf("%d�O�̤j��%d�O�̤p��", c, a);

	}
}
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,c;
	printf("�п�J�@�ӼƦr:");
	scanf("%d", &a);
	
	c = a % 2;
    
	if (c == 0)
		printf("%d�O����", a);
	else
		printf("%d�O���", a);
}
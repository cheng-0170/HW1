#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,c;
	printf("叫块计:");
	scanf("%d", &a);
	
	c = a % 2;
    
	if (c == 0)
		printf("%d琌案计", a);
	else
		printf("%d琌膀计", a);
}
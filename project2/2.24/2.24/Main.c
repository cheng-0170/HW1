#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,c;
	printf("請輸入一個數字:");
	scanf("%d", &a);
	
	c = a % 2;
    
	if (c == 0)
		printf("%d是偶數", a);
	else
		printf("%d是基數", a);
}
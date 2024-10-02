#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 0,i=0;
	for (i=2;i<=10;i+=2)
	{

		for (a=1; a<=(10-i)/2; a++)
			    printf(" ");
			for (a = 1; a <=i-1; a++)
				printf("*");
				printf("\n");
			
	
	}
	system("pause");
	return 0;





}
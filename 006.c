#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 3)
	{
		int blank = (3 - i);
		while (blank--)
			printf(" ");
		int star = 2 * i - 1;
		while (star--)
			printf("*");
		printf("\n");
		i++;
	}
	i = 2;
	while (i >= 1)
	{
		int blank = (3 - i);
		while (blank--)
			printf(" ");
		int star = 2 * i - 1;
		while (star--)
			printf("*");
		printf("\n");
		i--;
	}
}
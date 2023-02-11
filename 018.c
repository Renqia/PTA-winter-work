#include<stdio.h>
int main()
{
	char ele = 'a';
	int i;
	for (i = 0; i<4; i++)
	{
		int j = 0;
		for (j = 0; j<7; j++)
		{
			if (i == 3 || i == 2)
			if (j == 3)
			{
				printf(" ");
				continue;
			}
			if (j == 6)
				printf("%c\n", ele++);
			else
				printf("%c", ele++);
		}
	}

}
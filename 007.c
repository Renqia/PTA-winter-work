#include<stdio.h>
void print_star(int i)
{
	while (i--)
		printf("*");
}
void print_blank(int i)
{
	while (i--)
		printf(" ");
}
int main()
{
	int line = 1;
	while (line <= 5)
	{
		int star = line;
		print_star(star);
		int blank = 2 * (5 - line);
		print_blank(blank);
		print_star(star);
		printf("\n");
		line++;
	}
}
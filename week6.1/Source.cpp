#pragma warning (disable: 4996)
#include <stdio.h>

int a, x = 1, y;
int main()
{
	FILE* f = fopen("data01.txt", "w");

	printf("Enter your number: ");
	scanf_s("%d", &a);
	while (x <= a)
	{
		y = 1;
		while (y <= x)
		{
			fprintf(f,"*");
			y = y + 1;
		}
		fprintf(f,"\n");
		x = x + 1;
	}

	fclose(f);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	FILE *file;
	file = fopen("./phonebook.csv", "a");
	if (file == NULL)
	{
		perror("Failed to open file");
		return 1;\
	}

	// char name[20]; cannot use string or \n in scanf- non whitespace char expected
	// char number[20];
	char *name = malloc(20);
	char *number = malloc(20);

	printf("Enter name and number:");
	scanf("%19s", name);
	scanf("%19s", number);
	fprintf(file, "%s,%s\n", name, number);
	fclose(file);

	return 0;
}

//Sem4 | task1 and task2

#include <stdio.h>
#include "sem4.h"
#define MAX_SIZE 30

int main()
{
	char array_hex[MAX_SIZE];

	int value1, value2, input, count;
	
	puts("Input the number: ");

	for (count = 0; (input = getchar()) != '\n'; count++)
		array_hex[count] = input;

	array_hex[count] = '\0';

	value1 = hex_to_dec(array_hex);
	printf("Task 1: %d\n", value1);

	value2 = bin_count(value1);
	printf("Task 2: %d\n", value2);
}

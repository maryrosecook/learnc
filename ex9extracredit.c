#include <stdio.h>
#include <math.h>

int numDigits(char c)
{
	return log10((int)c) + 1;
}

long charToNum(char name[], int nameLength, int index)
{
	int i = index + 1;
	long value = (int)name[index];
	while(i < nameLength)
	{
		value = value * pow(10, numDigits(name[i]));
		i++;
	}

	return value;
}

int main(int argc, char *argv[])
{
	int nameLength = 3;
	char name[3] = {'m', 'r', 'c'};

	printf("String:  %s\n", name);
	printf("As ints: %d %d %d\n", name[0], name[1], name[2]);
	printf("As num:  %ld\n", charToNum(name, nameLength, 0) +
														charToNum(name, nameLength, 1) +
														charToNum(name, nameLength, 2));
	return 0;
}

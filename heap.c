#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int strLen = 4;
	char *unterminatedString = malloc(sizeof(char) * strLen);
	unterminatedString[0] = 'a';
	unterminatedString[1] = 'a';
	unterminatedString[2] = 'a';

	printf("%s\n", unterminatedString);
	return 0;
}

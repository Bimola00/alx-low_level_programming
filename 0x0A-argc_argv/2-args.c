#include <stdio.h>
/**
 *main - Beginning
 *@argc : argument count
 *
 *@argv : arg vector
 *
 *Return : Always (0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

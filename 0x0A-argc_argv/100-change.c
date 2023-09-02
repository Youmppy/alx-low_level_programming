#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		/* Print an error message and return 1 if argc is not 2 */
		printf("Error\n");
		return (1);
	}

	int amount = atoi(argv[1]);

	if (amount < 0)
	{
		/* If the input amount is negative, print 0 and return 0 */
		printf("0\n");
		return (0);
	}

	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);
	int count = 0;

	for (int i = 0; i < num_coins; i++)
	{
		while (amount >= coins[i])
		{
			amount -= coins[i];
			count++;
		}
	}

	/* Print the minimum number of coins required */
	printf("%d\n", count);

	return (0);
}

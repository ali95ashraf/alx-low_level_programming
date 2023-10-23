#include "main.h"

/**
 * print_chessboard - Prints an 8x8 chessboard.
 * @a: A pointer to a 2D array representing the chessboard.
*/

void print_chessboard(char (*a)[8])
{
	int cd, cb;

	for (cd = 0; cd < 8; cd++)
	{
		for (cb = 0; cb < 8; cb++)
		{
			_putchar(a[cd][cb]);
		}
		_putchar('\n');
	}
}


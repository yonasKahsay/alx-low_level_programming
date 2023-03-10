#include "main.h"
#include <string.h>

/**
 * changecoin - fills the first n memory byters with a constant
 * @coin: the coin standard we have
 * @change: the change amount
 *
 * Return: it returns a the coin count
 */
int changecoin(int change, int coin)
		{
		int count = 0;

		if (change >= coin)
		{
		count = change / coin;
		return (count);
		}
		return (0);
		}

#include "main.h"
#include "ctype.h"
#include <stdlib.h>
#include "time.h"
/**
 * jack_bauer - Entry point
 * Return:0
 */
void jack_bauer(void)
{
	int heure, minute;

	for (heure = 0; heure <= 23; heure++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar('0' + heure / 10);
			_putchar('0' + heure % 10);
			_putchar(':');
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			_putchar('\n');
		}
	}
}


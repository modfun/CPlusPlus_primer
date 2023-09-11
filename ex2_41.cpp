#include "ex2_41.h"

/**
 * main - entry point
 *
 * Description: starting procedure.
 */
int main()
{
	char s[] = "isbn-1234-cc";
	sd_t dataOne = {s, 12, 34.12};
	printf("%s:\t%d Units, $%.2f .\n", dataOne.bookNo, dataOne.units,
			dataOne.revenue);
	return (0);
}

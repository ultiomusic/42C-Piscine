#include <unistd.h>

int		main(void)
{
	write(1, "0 2 4 6 8 10", 12);
	return (0);
}
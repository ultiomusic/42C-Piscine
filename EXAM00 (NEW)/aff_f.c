#include <unistd.h>

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;
	write(1, "f\n", 2);
	return (0);
}
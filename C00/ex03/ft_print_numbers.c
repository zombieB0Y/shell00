#include <unistd.h>

void ft_print_numbers(void)
{
	char zbi;
		zbi ='0';
		while (zbi<= '9')
		{
			write(1, &zbi, 1);
			zbi = zbi +1;
		}
}

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	first;

	first = 'z';
	while (first >= 'a')
	{
		ft_putchar(first);
		first = first -1;
	}
}

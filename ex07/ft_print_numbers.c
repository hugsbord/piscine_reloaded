#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int i;

	i = 47;
	while (++i <= 57)
		ft_putchar(i);
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}

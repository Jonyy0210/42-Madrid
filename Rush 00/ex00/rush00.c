#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((r == 1 || r == y) && !(c == 1 || c == x))
				ft_putchar('-');
			else if ((c == 1 || c == x) && !(r == 1 || r == y))
				ft_putchar('|');
			else if (c == 1 || c == x)
				ft_putchar('o');
			else
				ft_putchar(' ');
		c++;
		}
	r++;
		ft_putchar('\n');
	}
}
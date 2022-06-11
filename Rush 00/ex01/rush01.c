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
			if ((c == 1 && r == 1) || (c == x && r == y && c != 1 && r != 1))
				ft_putchar('/');
			else if ((r == 1 && c == x) || (c == 1 && r == y))
				ft_putchar('\\');
			else if ((c == 1) || (c == x) || (r == 1) || (r == y))
				ft_putchar('*');
			else
				ft_putchar(' ');
		c++;
		}
	r++;
		ft_putchar('\n');
	}
}
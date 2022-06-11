/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcatalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:01:07 by jcatalan          #+#    #+#             */
/*   Updated: 2022/05/18 17:29:16 by jcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	tres_digitos(int x, int y, int z)
{
	write(1, ",", 1);
	write(1, " ", 1);
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
}

void	ft_print_comb(void)
{
	int	u;
	int	d;
	int	c;

	write(1, "012", 3);
	c = '0';
	d = '1';
	u = '3';
	while (c <= '7')
	{
		while (d <= '8')
		{
			while (u <= '9')
			{
				if (d > c && u > d)
				{
					tres_digitos(c, d, u);
				}
				u++;
			}
			u = d++ + 1;
		}
		d = c++ + 1;
	}
}

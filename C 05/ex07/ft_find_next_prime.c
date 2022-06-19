/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   42Madrid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcatalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:56:35 by jcatalan          #+#    #+#             */
/*   Updated: 2022/06/02 20:56:37 by jcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb < 2)
		return 0;
	while (a <= nb / 2)
	{
		if (nb % a == 0)
			return 0;
		a++;
	}
	return 1;
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return nb;
}

int	main(void)
{
	int	a = 0;
	while (a < 25)
	{
		printf("%i = %i\n", a, ft_find_next_prime(a));
		a++;
	}
	return 0;
}

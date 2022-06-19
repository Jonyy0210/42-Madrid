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

int	main(void)
{
	int	a = 0;
	while (a <= 25)
	{
		printf("n = %i; %d\n", a, ft_is_prime(a));
		a++;
	}
	return 0;
}

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

int	ft_iterative_power(int nb, int power)
{
	int	a;

	a = 1;
	if (power <= 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		a *= nb;
		power--;
	}
	return (a);
}

int	main(void)
{
	printf("%i\n", ft_iterative_power(3, 3));
	return (0);
}

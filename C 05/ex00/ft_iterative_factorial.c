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

int	ft_iterative_factorial(int nb)
{
	int	a;

	if (nb < 0)
		return (0);
	a = nb * nb;
	while (nb > 1)
	{
		a *= --nb;
	}
	return (a);
}

int	main(void)
{
	int	a = 5;

	printf("%i\n", ft_iterative_factorial(a));
	return (0);
}

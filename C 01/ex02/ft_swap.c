/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcatalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 13:28:47 by jcatalan          #+#    #+#             */
/*   Updated: 2022/05/22 13:28:51 by jcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	e;
	int	f;

	e = '4';
	f = '2';
	write(1, &e, 2);
	write(1, "\n", 1);
	write(1, &f, 2);
	write(1, "\n", 1);
	write(1, "El nuevo valor es: \n", 20);
	ft_swap(&e, &f);
	write(1, &e, 1);
	write(1, "\n", 1);
	write(1, &f, 1);
	write(1, "\n", 1);
	return (0);
}*/

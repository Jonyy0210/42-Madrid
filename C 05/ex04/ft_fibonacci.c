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

int	ft_fibonacci(int index)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	while (index > 2)
	{
		c = a + b;
		a = b;
		b = c;
		index--;
	}
	return (c);
}

int	ft_recursive_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	if (index > 2)
		return (ft_recursive_fibonacci(index - 1) + ft_recursive_fibonacci(index - 2));
	return (0);
}

int	main(void)
{
	printf("%i\n", ft_fibonacci(10));
	printf("%i\n", ft_recursive_fibonacci(11));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcatalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:21:20 by jcatalan          #+#    #+#             */
/*   Updated: 2022/05/26 18:21:23 by jcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int	c;
	int	d;
	int	*e;
	int	*f;

	c = 42;
	d = 7;
	e = &c;
	f = &d;
	ft_ultimate_div_mod(e, f);
	printf("%d\n" "%d\n", *e, *f);
	return (0);
}*/

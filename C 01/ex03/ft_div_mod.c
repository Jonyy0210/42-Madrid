/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcatalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:50:17 by jcatalan          #+#    #+#             */
/*   Updated: 2022/05/26 15:50:22 by jcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
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
	ft_div_mod(c, d, e, f);
	printf("%d\n" "%d", *e, *f);
	return (0);
}*/

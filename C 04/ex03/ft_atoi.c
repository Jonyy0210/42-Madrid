/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcatalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:58:17 by jcatalan          #+#    #+#             */
/*   Updated: 2022/06/01 15:58:19 by jcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	a;
	int	n;
	int	c;

	a = 0;
	n = 0;
	c = 1;
	while (str[a] == 32 || (str[a] >= 9 && str[a] <= 13))
	{
		a++;
	}
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
		{
			c *= -1;
		}
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		n = ((str[a] - '0') + (n * 10));
		a++;
	}
	return (n * c);
}

int	main(void)
{
	int	a;
	char	b[] = "		   -+----+-++-424242Madrid424242";

	a = ft_atoi(b);
	printf(" Valor de la cadena = %s\n Valor del entero = %d\n", b, a);
	return(0);
}

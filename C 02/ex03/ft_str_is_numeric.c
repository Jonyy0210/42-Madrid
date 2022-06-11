/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcatalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:06:12 by jcatalan          #+#    #+#             */
/*   Updated: 2022/05/28 13:06:14 by jcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	e;
	int	f;

	e = 1;
	f = 0;
	while (str[f] != '\0')
	{
		if ((str[f] > '9') || (str[f] < '0'))
		{
			e = 0;
		}
		f++;
	}
	return (e);
}

/*int	main(void)
{
	char	*a = "424242";
	char	*b = "42 Madrid";
	char	*c = "";
	int	d;

	d = ft_str_is_numeric(a);
	printf("%d\n", d);
	d = ft_str_is_numeric(b);
	printf("%d\n", d);
	d = ft_str_is_numeric(c);
	printf("%d\n", d);
	return (0);
}*/

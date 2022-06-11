/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcatalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:21:34 by jcatalan          #+#    #+#             */
/*   Updated: 2022/05/28 13:21:36 by jcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	e;
	int	f;

	e = 1;
	f = 0;
	while (str[f] != '\0')
	{
		if ((str[f] < 32) || (str[f] > 126))
		{
			e = 0;
		}
		f++;
	}
	return (e);
}

/*int	main(void)
{
	char	*a = "\n";
	char	*b = "42 Madrid";
	char	*c = "";
	int	d;

	d = ft_str_is_printable(a);
	printf("%d\n", d);
	d = ft_str_is_printable(b);
	printf("%d\n", d);
	d = ft_str_is_printable(c);
	printf("%d\n", d);
	return (0);
}*/

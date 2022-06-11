/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcatalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:18:21 by jcatalan          #+#    #+#             */
/*   Updated: 2022/05/28 13:18:50 by jcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	e;
	int	f;

	e = 1;
	f = 0;
	while (str[f] != '\0')
	{
		if ((str[f] < 'A') || (str[f] > 'Z'))
		{
			e = 0;
		}
		f++;
	}
	return (e);
}

/*int	main(void)
{
	char	*a = "STRING";
	char	*b = "42 Madrid";
	char	*c = "";
	int	d;

	d = ft_str_is_uppercase(a);
	printf("%d\n", d);
	d = ft_str_is_uppercase(b);
	printf("%d\n", d);
	d = ft_str_is_uppercase(c);
	printf("%d\n", d);
	return (0);
}*/

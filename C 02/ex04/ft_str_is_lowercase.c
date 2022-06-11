/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcatalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:14:35 by jcatalan          #+#    #+#             */
/*   Updated: 2022/05/28 13:14:37 by jcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	e;
	int	f;

	e = 1;
	f = 0;
	while (str[f] != '\0')
	{
		if ((str[f] < 'a') || (str[f] > 'z'))
		{
			e = 0;
		}
		f++;
	}
	return (e);
}

/*int	main(void)
{
	char	*a = "string";
	char	*b = "42 Madrid";
	char	*c = "";
	int	d;

	d = ft_str_is_lowercase(a);
	printf("%d\n", d);
	d = ft_str_is_lowercase(b);
	printf("%d\n", d);
	d = ft_str_is_lowercase(c);
	printf("%d\n", d);
	return (0);
}*/

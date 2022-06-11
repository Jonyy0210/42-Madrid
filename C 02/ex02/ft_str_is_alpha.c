/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcatalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 05:19:22 by jcatalan          #+#    #+#             */
/*   Updated: 2022/05/28 05:19:25 by jcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	e;
	int	f;

	e = 1;
	f = 0;
	while (str[f] != '\0')
	{
		if ((str[f] < 'A' || str[f] > 'z') || (str[f] < 'a' && str[f] > 'Z'))
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

	d = ft_str_is_alpha(a);
	printf("%d\n", d);
	d = ft_str_is_alpha(b);
	printf("%d\n", d);
	d = ft_str_is_alpha(c);
	printf("%d\n", d);
	return (0);
}*/

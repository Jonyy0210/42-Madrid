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

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	int	i;
	int	a;
	char	*dest;

	a = 0;
	i = ft_strlen(str);
	dest = malloc(sizeof(str) * (i + 1));
	if (dest == NULL)
		return NULL;
	while (str[a] != '\0')
	{
		dest[a] = str[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*res;
	int	i;

	i = 0;
	res = malloc(sizeof(t_stock_str) * (ac + 1));
	if (res == NULL)
			return NULL;
	while (i < ac)
	{
		res[i].str = av[i];
		res[i].size = ft_strlen(av[i]);
		res[i].copy = ft_strdup(av[i]);
		i++;
	}
	res[i].str = '\0';
	return (res);
}

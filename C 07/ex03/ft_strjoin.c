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
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{	
	char	*res;
	int	a;
	int	b;
	int	i;

	b = 0;
	i = 0;
	res = malloc(sizeof(strs));
	if (size == 0)
	{
		res = NULL;
		return 0;
	}
	if (res == NULL)
		return 0;
	while (b < size)
	{
		a = 0;
		while (strs[b][a] != '\0')
		{
			res[i++] = strs[b][a++];
		}
		a = 0;
		while (sep[a] != '\0' && b < size - 1)
		{
			res[i++] = sep[a++];
		}
		b++;
	}
	res[i] = '\0';
	return (res);
}

int	main(void)
{
	char	*cadena[3];

	cadena[0] = "Hola";
	cadena[1] = "42";
	cadena[2] = "Madrid";
	printf("%s", ft_strjoin(3, cadena, " - "));
	return 0;
}

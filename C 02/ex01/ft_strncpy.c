/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcatalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 04:48:30 by jcatalan          #+#    #+#             */
/*   Updated: 2022/05/28 04:48:35 by jcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	d;

	d = 0;
	while (src[d] != '\0' && d < n)
	{
		dest[d] = src[d];
		d++;
	}
	while (d < n)
	{
		dest[d] = '\0';
		d++;
	}
	return (dest);
}

/*int	main(void)
{
	char	*a = "string";
	char	b[10] = "hola";
	char	*c;
	unsigned int	n = 4;

	c = ft_strncpy(b, a, n);
	printf("%s", c);
	return (0);
}*/

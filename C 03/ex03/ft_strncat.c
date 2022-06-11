/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcatalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 01:05:09 by jcatalan          #+#    #+#             */
/*   Updated: 2022/06/01 01:05:13 by jcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	f;

	i = 0;
	f = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[f] != '\0' && f < nb)
	{
		dest[i + f] = src[f];
		f++;
	}
	dest[i + f] = '\0';
	return (dest);
}

/*int main(void)
{
    char    a[] = "1234";
    char    b[10] = "56789";
    char    *c;
    int d = 3;

    c = ft_strncat(a, b, d);
    printf("%s\n", c);
    return (0);
}*/

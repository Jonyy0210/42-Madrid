/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcatalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:24:24 by jcatalan          #+#    #+#             */
/*   Updated: 2022/05/31 21:24:32 by jcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	f;

	i = 0;
	f = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[f] != '\0')
	{
		dest[i] = src[f];
		i++;
		f++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
    char    a[] = "123";
    char    b[5] = "456";
    char    *c;

    c = ft_strcat(a, b);
    printf("%s\n", c);
    return (0);
}*/

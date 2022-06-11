/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcatalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 01:17:29 by jcatalan          #+#    #+#             */
/*   Updated: 2022/06/01 01:17:32 by jcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{

}

int	main(void)
{
	char	a[] = "Hola esto es 42 Madrid";
	char	b[] = "42";
	char	*c;

	c = ft_strstr(a, b);
	printf("%s\n", c);
	return (0);
}
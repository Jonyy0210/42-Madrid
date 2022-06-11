/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcatalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 00:06:25 by jcatalan          #+#    #+#             */
/*   Updated: 2022/05/30 00:06:26 by jcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	a;

	a = 0;
	while (s1[a] == s2[a] && (s1[a] != '\0' || s2[a] != '\0'))
	{
		a++;
	}
	return (s1[a] - s2[a]);
}

/*int	main(void)
{
	char	a[] = "42";
	char	b[] = "42";
	char	c[] = "77";
	int	d;

	printf("Primera comparacion: " "%s y " "%s\n", a, b);
	d = ft_strcmp(a, b);
	printf("%d\n", d);
	printf("Segunda comparacion: " "%s y " "%s\n", c, a);
	d = ft_strcmp(c, a);
	printf("%d\n", d);
	printf("Tercera comparacion: " "%s y " "%s\n", a, c);
	d = ft_strcmp(a, c);
	printf("%d\n", d);
	return (0);
}*/

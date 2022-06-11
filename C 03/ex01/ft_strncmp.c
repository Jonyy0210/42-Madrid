/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcatalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:02:48 by jcatalan          #+#    #+#             */
/*   Updated: 2022/05/30 18:02:49 by jcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (s1[a] == s2[a] && (s1[a] != '\0' || s2[a] != '\0') && a < n)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	if (a != n)
	{
		return (s1[a] - s2[a]);
	}
	return (0);
}

/*int	main(void)
{
	char	a[] = "1234";
	char	b[] = "hoao";
	char	c[] = "1223";
	unsigned int	n = 0;
	int	d;

	printf("Primera comparacion: " "%s y " "%s\n", a, b);
	d = ft_strncmp(a, b, n);
	printf("%d\n", d);
	printf("Segunda comparacion: " "%s y " "%s\n", c, a);
	d = ft_strncmp(c, a, n);
	printf("%d\n", d);
	printf("Tercera comparacion: " "%s y " "%s\n", a, c);
	d = ft_strncmp(a, c, n);
	printf("%d\n", d);
	return (0);
}*/
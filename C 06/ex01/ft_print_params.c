/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcatalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:04:16 by jcatalan          #+#    #+#             */
/*   Updated: 2022/06/02 20:04:17 by jcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	if (argc > 1)
	{
		while (b < argc)
		{
			a = 0;
			while (argv[b][a] != '\0')
			{
				write(1, &argv[b][a], 1);
				a++;
			}
			write(1, "\n", 1);
			b++;
		}
	}
	return (0);
}

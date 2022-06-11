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

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;

	i = 0;
	res = malloc(sizeof(int) * (max - min));
	if (min >= max || res == NULL)
		return (0);
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}

void	print_test(int *test, int size)
{
	int i;

	for (i = 0; i < size - 1; i++)
	{
		printf("%d ", test[i]);
	}
	if (size > 0)
		printf("%d\n", test[size - 1]);
}

int	main(void)
{
	int	*a;
	int	*b;

	a = ft_range(5, 10);
	printf("Min; 5 Max; 10\n");
	print_test(a, 5);

	b = ft_range(1, 100);
	printf("\nMin; 1 Max; 100\n");
	print_test(b, 99);
}

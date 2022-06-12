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
	int	b;
	int	min = 1;
	int	max = 16;

	b = max - min;
	a = ft_range(min, max);
	printf("Min; %i Max; %i\n", min, max);
	print_test(a, b);
	return (0);
}

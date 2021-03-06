/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcatalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:56:35 by jcatalan          #+#    #+#             */
/*   Updated: 2022/06/02 20:56:37 by jcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*res;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return 0;
	}
	res = malloc(sizeof(int) * (max - min));
	if (res == NULL)
	{
		*range = NULL;
		return -1;
	}
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	*range = res;
	return (i);
}

int	main(void)
{
	int	*a;
	int	min = 0;
	int	max = 5;

	while (max <= 9)
	{
		printf("%d\n", ft_ultimate_range(&a, min, max));
		max++;
	}
	while (min <= 5)
	{
		printf("%d\n", ft_ultimate_range(&a, min, max));
		min++;
	}
	return 0;
}

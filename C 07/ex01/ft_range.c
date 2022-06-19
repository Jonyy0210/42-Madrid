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
		return 0;
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}

int	main(void)
{
	int	*a;
	int	b;
	int	i = 0;
	int	min = 1;
	int	max = 16;

	b = max - min;
	a = ft_range(min, max);
	printf("Min; %i Max; %i\n", min, max);
	while (i < b - 1)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("%d\n", a[i]);
	return 0;
}

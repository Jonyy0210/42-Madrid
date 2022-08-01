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
#include "ft.h"

int main(void)
{
    int a, b;
    
    a = 2;
    b = 4;
    ft_putchar('c');
    printf("\n");
    printf("%i - %i", a, b);
    printf("\n");
    ft_swap(&a, &b);
    printf("%i - %i", a, b);
    printf("\n");
    ft_putstr("42 Madrid");
    printf("\n");
    printf("%i\n", ft_strlen("Madrid"));
    printf("%i\n", ft_strcmp("Hola", "Hola"));
    return 0;
}

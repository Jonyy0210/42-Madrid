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

#ifndef __FT_BOOLEAN_H__

#define __FT_BOOLEAN_H__

#include <unistd.h>

#define SUCCESS 0

#define TRUE 0

#define FALSE 1

#define EVEN_MSG "I have an even number of arguments.\n"

#define ODD_MSG "I have an odd number of arguments.\n"

typedef int t_bool;

#define EVEN(var) (var % 2)

#endif

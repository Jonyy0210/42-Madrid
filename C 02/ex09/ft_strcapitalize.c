/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcatalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 22:12:57 by jcatalan          #+#    #+#             */
/*   Updated: 2022/05/29 22:13:01 by jcatalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] += 32;
		}
		a++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	b;

	a = 0;
	ft_strlowcase(str);
	while (str[a] != '\0')
	{
		if (str[a - 1] >= 'a' && str[a - 1] <= 'z')
			b = 1;
		else if (str[a - 1] >= 'A' && str[a - 1] <= 'Z')
			b = 1;
		else if (str[a - 1] >= '0' && str[a - 1] <= '9')
			b = 1;
		else
		{
			b = 0;
		}
		if (str[a] >= 'a' && str[a] <= 'z' && b == 0)
			str[a] -= 32;
		a++;
	}
	return (str);
}

/*int	main(void)
{
	char	c[] = "hola, 42esto (es) una; prUEba :ss:aa";

	printf("%s\n", c);
	printf("%s\n", ft_strcapitalize(c));
	return (0);
}*/

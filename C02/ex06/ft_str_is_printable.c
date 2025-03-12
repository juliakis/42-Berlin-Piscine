/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:03:49 by jkis              #+#    #+#             */
/*   Updated: 2025/03/04 12:00:17 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		x;
	int		put;
	char	a;

	x = 0;
	put = 1;
	while (str[x] != '\0')
	{
		a = str[x];
		if (a < 32 || a == 127)
		{
			put = 0;
		}
		x++;
	}
	return (put);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "bonjour";
	char	str2[] = "";
	char	str3[] = "bon\njour";
	char	str4[] = "123";
	char	str5[] = "%&%#";

	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));
	printf("%d\n", ft_str_is_printable(str3));
	printf("%d\n", ft_str_is_printable(str4));
	printf("%d\n", ft_str_is_printable(str5));
	return (0);
}
*/

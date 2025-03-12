/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:18:51 by jkis              #+#    #+#             */
/*   Updated: 2025/03/04 11:51:46 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		x;
	int		put;
	char	a;

	x = 0;
	put = 1;
	while (str[x] != '\0')
	{
		a = str[x];
		if (a < 48 || a > 57)
		{
			put = 0;
		}
		x++;
	}
	return (put);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "123";
	char	str3[] = "";
	char	str4[] = "hello123";

	printf ("%d\n", ft_str_is_numeric(str1));
	printf ("%d\n", ft_str_is_numeric(str2));
	printf ("%d\n", ft_str_is_numeric(str3));
	printf ("%d\n", ft_str_is_numeric(str4));
	return (0);
}
*/

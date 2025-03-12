/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:51:20 by jkis              #+#    #+#             */
/*   Updated: 2025/03/04 11:57:46 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int		x;
	int		put;
	char	a;

	x = 0;
	put = 1;
	while (str[x] != '\0')
	{
		a = str[x];
		if (a < 65 || a > 90)
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
	char 	str1[] = "HELLO";
	char	str2[] = "Hello";
	char	str3[] = "heLlo";
	char	str4[] = "";
	char	str5[] = "1m2n";
	char	str6[] = "*^%";
	char	str7[] = "MKO0";

	printf("%d\n", ft_str_is_uppercase(str1));
	printf("%d\n", ft_str_is_uppercase(str2));
	printf("%d\n", ft_str_is_uppercase(str3));
	printf("%d\n", ft_str_is_uppercase(str4));
	printf("%d\n", ft_str_is_uppercase(str5));
	printf("%d\n", ft_str_is_uppercase(str6));
	printf("%d\n", ft_str_is_uppercase(str7));
	return (0);
}
*/

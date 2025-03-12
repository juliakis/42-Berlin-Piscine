/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:29:54 by jkis              #+#    #+#             */
/*   Updated: 2025/03/04 11:54:17 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		x;
	int		put;
	char	a;

	x = 0;
	put = 1;
	while (str[x] != '\0')
	{
		a = str[x];
		if (a < 97 || a > 122)
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
	char 	str1[] = "hello";
	char	str2[] = "Hello";
	char	str3[] = "heLlo";
	char	str4[] = "";
	char	str5[] = "1m2n";
	char	str6[] = "*^%";

	printf("%d\n", ft_str_is_lowercase(str1));
	printf("%d\n", ft_str_is_lowercase(str2));
	printf("%d\n", ft_str_is_lowercase(str3));
	printf("%d\n", ft_str_is_lowercase(str4));
	printf("%d\n", ft_str_is_lowercase(str5));
	printf("%d\n", ft_str_is_lowercase(str6));
	return (0);

}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:09:41 by jkis              #+#    #+#             */
/*   Updated: 2025/03/04 11:49:40 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		x;
	int		put;
	char	a;

	x = 0;
	put = 1;
	while (str[x] != '\0')
	{
		a = str[x];
		if (a < 65 || (a > 90 && a < 97) || a > 122)
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
	char	str1 []= "hello";
	char	str2 []= "";
	char	str3 []= "funnn7265";
	printf("%d\n", ft_str_is_alpha(str1));
	printf("%d\n", ft_str_is_alpha(str2));
	printf("%d\n", ft_str_is_alpha(str3));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:35:04 by jkis              #+#    #+#             */
/*   Updated: 2025/03/04 12:06:14 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		x;
	char	a;

	x = 0;
	while (str[x] != '\0')
	{
		a = str[x];
		if (a >= 65 && a <= 90)
		{
			str[x] = a + 32;
		}
		x++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "HELLO";
	char	str2[] = "hello";
	char	str3[] = "hElLo";
	char	str4[] = "h377O";

	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", ft_strlowcase(str2));
	printf("%s\n", ft_strlowcase(str3));
	printf("%s\n", ft_strlowcase(str4));
	return (0);
}
*/

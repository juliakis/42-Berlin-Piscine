/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 10:44:33 by jkis              #+#    #+#             */
/*   Updated: 2025/03/04 11:36:46 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		x;
	char	a;

	x = 0;
	while (str[x] != '\0')
	{
		a = str[x];
		if (x == 0 && (a >= 97 && a <= 122))
			str [x] = a - 32;
		else if (a < 48 || (a > 57 && a < 65) || (a > 90 && a < 97) || a > 122)
		{
			if ((str[x + 1]) >= 97 && (str [x + 1]) <= 122)
			{
				str [x + 1] = str [x + 1] - 32;
				x++;
			}
		}
		else if (x > 0 && (a >= 65 && a <= 90))
			str[x] = a + 32;
		x++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = " hello";
	char	str2[] = "HELLO";
	char	str3[] = "hello 42there";
	char	str4[] = "hELLO tHERE";
	char	str5[] = "hello+there+you";

	printf("%s\n", ft_strcapitalize(str1));
	printf("%s\n", ft_strcapitalize(str2));
	printf("%s\n", ft_strcapitalize(str3));
	printf("%s\n", ft_strcapitalize(str4));
	printf("%s\n", ft_strcapitalize(str5));
	return(0);
}
*/

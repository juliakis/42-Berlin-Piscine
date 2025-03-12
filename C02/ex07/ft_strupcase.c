/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:14:53 by jkis              #+#    #+#             */
/*   Updated: 2025/03/04 12:02:26 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		x;
	char	b;

	x = 0;
	while (str[x] != '\0')
	{
		b = str[x];
		if (b >= 97 && b <= 122)
		{
			str[x] = b - 32;
		}
		x++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "hEllo";
	char	str3[] = "HELLO";
	char	str4[] = "HE134";
	char	str5[] = "he134";
	
	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
	printf("%s\n", ft_strupcase(str3));
	printf("%s\n", ft_strupcase(str4));
	printf("%s\n", ft_strupcase(str5));
	return (0);
}
*/

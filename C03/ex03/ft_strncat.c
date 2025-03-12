/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:20:42 by jkis              #+#    #+#             */
/*   Updated: 2025/03/06 12:38:59 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	i;

	x = 0;
	i = 0;
	while (dest[x])
	{
		x++;
	}
	while (src[i] && i < nb)
	{
		dest[x + i] = src[i];
		i++;
	}
	dest[x + i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char	str1[] = "hello hello";
	char	str2[] = "hello hellotoo";
	char	str3[] = "hello hello";
	char	str4[] = "hello hellotoo";

	printf ("Result my function: %s\n", ft_strncat(str1, str2, 3));
	printf ("Result strncat: %s\n", strncat(str3, str4, 3));
	return(0);
}
*/

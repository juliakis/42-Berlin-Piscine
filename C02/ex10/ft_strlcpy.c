/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:30:06 by jkis              #+#    #+#             */
/*   Updated: 2025/03/04 12:09:29 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;

	x = 0;
	while (src[x] != '\0' && x < (size - 1))
	{
		dest[x] = src[x];
		x++; 
	}
	while (x < (size - 1))
	{
		dest[x] = '\0';
		x++;
	}
	dest[x] = '\0';
	return (size);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "bonsoir";
	unsigned int	size = 3;

	printf("Originals:\n%s\n%s\n\n", str1, str2);
	ft_strlcpy(str1, str2, size);
	printf("ft_strlcpy result: %s\n", str1);
	printf("strlcpy result: %d\n", strlcpy(str1, str2, size));
	return(0);
}
*/

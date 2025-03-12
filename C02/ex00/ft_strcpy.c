/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:11:57 by jkis              #+#    #+#             */
/*   Updated: 2025/03/04 11:43:36 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = src[x];
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1 [] = "Hello";
	char str2 [] = "buongiorno";

	printf ("Originals:\n%s\n%s\n\n", str1, str2);
	ft_strcpy(str1, str2);
	printf ("ft_strcpy result:%s\n", str1);
	printf ("strcpy result:%s\n", strcpy(str1, str2));
	return (0);
}
*/

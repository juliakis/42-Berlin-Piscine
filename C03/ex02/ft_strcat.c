/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:23:31 by jkis              #+#    #+#             */
/*   Updated: 2025/03/05 11:47:43 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	i;

	x = 0;
	i = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[i] != '\0')
	{
		dest[x] = src[i];
		i++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char	str1[] = "Loving ";
	char 	str2[] = "the piscine";
	char	str3[] = "Loving ";
	char	str4[] = "the piscine";
	
	printf ("Result my function: %s\n", ft_strcat(str1, str2));
	printf ("Result strcat: %s\n", strcat(str3, str4));
	return (0);
}
*/

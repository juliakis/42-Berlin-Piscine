/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:25:05 by jkis              #+#    #+#             */
/*   Updated: 2025/03/04 11:46:20 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (src[x] != '\0' && x < n) 
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1 [] = "days";
	char	str2 [] = "heppy";
	unsigned int 	n = 2;

	printf ("Originals:\n%s\n%s\n\n", str2, str1);
	ft_strncpy(str1, str2, n);
	printf ("ft_strncpy result: %s\n", str1);
	printf ("strncpy result: %s\n", strncpy(str1, str2, n));
	return (0);
}
*/

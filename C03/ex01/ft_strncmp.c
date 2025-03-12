/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:03:51 by jkis              #+#    #+#             */
/*   Updated: 2025/03/05 16:20:07 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	if (n < 1)
	{
		return (0);
	}
	while ((s1[x] != '\0' || s2[x] != '\0') && s1[x] == s2[x] && x < n - 1)
	{
		x++;
	}
	return (s1[x] - s2[x]);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	ac = ac + 0;
	unsigned int	n = 2;
	printf("Result my function: %d\n", ft_strncmp(av[1], av[2], n));
	printf("Result strncmp: %d\n", strncmp(av[1], av[2], n));
	return (0);
}
*/

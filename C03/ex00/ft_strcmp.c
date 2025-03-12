/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:34:39 by jkis              #+#    #+#             */
/*   Updated: 2025/03/06 12:57:04 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while ((s1[x] != '\0' || s2[x] != '\0') && s1[x] == s2[x])
	{
		x++;
	}
	return (s1[x] - s2[x]);
}

/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	argc = argc + 0;
	printf ("Result my function:%d\n", ft_strcmp(argv[1], argv[2]));
	printf ("Result strcmp:%d\n", strcmp(argv[1], argv[2]));
	return (0);
}
*/

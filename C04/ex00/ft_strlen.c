/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:03:55 by jkis              #+#    #+#             */
/*   Updated: 2025/03/05 19:27:25 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "helllooooooo";
	printf ("string lenght: %d\n", ft_strlen(str));
	return(0);
}
*/

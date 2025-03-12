/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:18:12 by jkis              #+#    #+#             */
/*   Updated: 2025/02/25 16:13:34 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		x++;
	}
	return (x);
}
/*
int	main(void)
{
	char *str;
	str = "ouplaa42";
	printf("Number of characters: %d\n", ft_strlen(str));
	return (0);
}
*/

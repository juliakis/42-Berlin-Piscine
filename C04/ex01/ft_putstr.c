/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:28:56 by jkis              #+#    #+#             */
/*   Updated: 2025/03/06 13:42:58 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		write(1, &str[x], 1);
		x++;
	}
}
/*
int	main(void)
{
	ft_putstr("Isn't this fun");
	return (0);
}
*/ 

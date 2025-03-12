/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:54:55 by jkis              #+#    #+#             */
/*   Updated: 2025/02/20 17:56:12 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Calling in library
#include <unistd.h>

// Needed function
void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		write (1, &c, 1);
		c++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	write (1, "\n", 1);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:52:35 by jkis              #+#    #+#             */
/*   Updated: 2025/02/20 17:54:23 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Calling in library
#include <unistd.h>

// Needed function
void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write (1, &c, 1);
		c--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	write (1, "\n", 1);
	return (0);
}
*/

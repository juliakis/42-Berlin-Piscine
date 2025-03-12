/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:47:24 by jkis              #+#    #+#             */
/*   Updated: 2025/02/20 17:49:40 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Calling in library
#include <unistd.h>

// Needed function
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(void)
{
	ft_putchar('a');
	write(1, "\n", 1);
	return (0);
}
*/

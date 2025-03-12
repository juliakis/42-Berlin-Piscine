/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:56:45 by jkis              #+#    #+#             */
/*   Updated: 2025/02/20 18:00:04 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Calling in library
#include <unistd.h>

// Needed function 
void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write (1, "P", 1);
	}
	else 
	{
		write (1, "N", 1);
	}
}
/*
int	main(void)
{
	ft_is_negative('a');
	write (1, "\n", 1);
	return (0);
}
*/

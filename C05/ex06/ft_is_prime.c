/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:59:39 by jkis              #+#    #+#             */
/*   Updated: 2025/03/10 13:11:05 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++; 
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_is_prime(4));
	return (0);
}
*/

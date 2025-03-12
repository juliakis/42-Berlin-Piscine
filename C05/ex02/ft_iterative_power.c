/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:30:26 by jkis              #+#    #+#             */
/*   Updated: 2025/03/10 11:59:26 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		x = x * nb;
		i++;
	}
	return (x);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(4, 6));
	return(0);
}
*/

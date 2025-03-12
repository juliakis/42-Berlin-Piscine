/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:00:23 by jkis              #+#    #+#             */
/*   Updated: 2025/03/10 12:13:28 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (ft_recursive_power(nb, power - 1) * nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(3, 4));
	return (0);
}
*/

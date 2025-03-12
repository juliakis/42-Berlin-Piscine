/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:02:59 by jkis              #+#    #+#             */
/*   Updated: 2025/03/09 17:19:03 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (ft_recursive_factorial(nb - 1) * nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_factorial(4));
	return(0);
}
*/

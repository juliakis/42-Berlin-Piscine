/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:30:42 by jkis              #+#    #+#             */
/*   Updated: 2025/03/08 15:02:19 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	x;

	i = 1;
	x = 1;
	if (nb < 0)
		x = 0;
	else
	{
		while (i <= nb)
		{
			x = x * i;
			i++;
		}
	}
	return (x);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(-4));
	return(0);
}
*/

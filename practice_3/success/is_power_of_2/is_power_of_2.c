/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:42:12 by jkis              #+#    #+#             */
/*   Updated: 2025/03/13 13:58:31 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	while (n > 2)
		return(is_power_of_2(n / 2));
	if (n == 2)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", is_power_of_2(8));
	printf("%d\n", is_power_of_2(64));
	printf("%d\n", is_power_of_2(0));
	printf("%d\n", is_power_of_2(15));
	return (0);
}
*/

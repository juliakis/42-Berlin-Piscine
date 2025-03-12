/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:09:35 by jkis              #+#    #+#             */
/*   Updated: 2025/03/12 13:05:37 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int		i;

	i = 0;

	if (min >= max)
		return (0);
	range = (int *)malloc(sizeof(int) * (max - min));

	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return(range);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%p\n", ft_range(7, 15));
//	free(range);
	return(0);
}
*/

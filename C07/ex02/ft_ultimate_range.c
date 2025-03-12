/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:16:29 by jkis              #+#    #+#             */
/*   Updated: 2025/03/12 14:11:12 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	size = 0;

	*range = (int*)malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		*range = 0;
		return(-1);
	}
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++; 
		size++;
	}
	return (size);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_ultimate_range(range, 3, 21));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 18:04:21 by jkis              #+#    #+#             */
/*   Updated: 2025/03/12 18:17:40 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int	max;

	i = 0;
	max = tab[i];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[] = {1, 4, 7, 3, 6, 2};
	unsigned int len = 6;

	printf("%d\n", max(tab, len));
	return(0);
}
*/

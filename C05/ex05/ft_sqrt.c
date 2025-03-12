/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:35:51 by jkis              #+#    #+#             */
/*   Updated: 2025/03/10 12:58:41 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while ((i * i) < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(64));
	return (0);
}
*/

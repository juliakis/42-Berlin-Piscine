/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:37:53 by jkis              #+#    #+#             */
/*   Updated: 2025/03/10 16:50:22 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	x;

	x = 1;
	while (x < ac)
	{
		i = 0;
		while (av[x][i] != '\0')
		{
			write(1, &av[x][i], 1);
			i++;
		}
		write(1, "\n", 1);
		x++;
	}
	return (0);
}

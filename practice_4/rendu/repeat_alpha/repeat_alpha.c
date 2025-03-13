/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:45:37 by jkis              #+#    #+#             */
/*   Updated: 2025/03/13 15:23:06 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	repeat;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (av[1][i])
	{
		if (av[1][i] >= 'a' && av[1][i] <= 'z')
		{
			repeat = av[1][i] - 'a';
			while (repeat >= 0)
                	{
                        	write(1, &av[1][i], 1);
                        	repeat--;
                	}
		}
		else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
		{
			repeat = av[1][i] - 'A';
			while (repeat >= 0)
			{
				write(1, &av[1][i], 1);
				repeat--;
			}
		}
		else
			write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

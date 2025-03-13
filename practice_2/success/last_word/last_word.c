/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:00:01 by jkis              #+#    #+#             */
/*   Updated: 2025/03/12 17:45:00 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	start;
	int	end;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	end = 0;
	while (av[1][end])
		end++;
	i = end - 1;
	while ((av[1][i] == 32 || av[1][i] == 9) && i > 0)
		i--;
	while (av[1][i] != 32 && av[1][i] != 9 && i > 0)
		i--;
	start = i + 1;
	while (start < end && (av[1][start] != 32 && av[1][start] != 9))
	{
		write(1, &av[1][start], 1);
		start++;
	}
	write(1, "\n", 1);
	return (0);
}

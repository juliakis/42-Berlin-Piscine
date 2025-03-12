/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:07:56 by jkis              #+#    #+#             */
/*   Updated: 2025/03/11 13:32:26 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

void	ft_strswap(int ac, char **av)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < ac)
	{
		j = 1;
		while (av[i] && j < ac - 1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				temp = av[j];
				av[j] = av[j + 1];
				av[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	x;
	int	y;

	ft_strswap(ac, av);
	x = 1;
	while (x < ac)
	{
		y = 0;
		while (av[x][y])
		{
			write(1, &av[x][y], 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
	return (0);
}

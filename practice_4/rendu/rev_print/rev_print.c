/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:48:02 by jkis              #+#    #+#             */
/*   Updated: 2025/03/13 16:09:09 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
//	int	i;
	int	len;
//	char	temp;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	len = 0;
	while (av[1][len])
		len++;
	len = len - 1;
	while (len >= 0)
	{
		write(1, &av[1][len], 1);
		len--;
	}
	/*
	i = 0;
	while (i < ((len - 1) / 2))
	{
		temp = av[1][i];
		av[1][i] = av[1][len - 1 - i];
		av[1][len - 1 - i] = temp;
		i++;
	}
	i = 0;
	while (av[1][i])
	{
		write(1, &av[1][i], 1);
		i++;
	}
	*/
	write(1, "\n", 1);
	return (0);
}

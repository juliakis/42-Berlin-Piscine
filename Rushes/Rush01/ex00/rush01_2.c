/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 09:25:52 by jkis              #+#    #+#             */
/*   Updated: 2025/02/25 09:39:00 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	add_shape(int x, int y, int column, int row)
{
	if ((row == 1 && column == 1) || (row == y && column == x))
	{
		ft_putchar('/');
	}
	else if (((row == 1 || row == y) && (column > 1 && column < x)) || ((row > 1 && row < y) && (column == 1 || column == x)))
	{
		ft_putchar('*');
	}
	else if ((row == 1 && column == x) || (row == y && column == 1))
	{
		ft_putchar('\');
	}
	else
	{
		ft_putchar(' ');
	}
}
void	rush(int x, int y)

	int	column;
	int	row;

	if (x <= 0 || y <= 0)
	{
		return;
	}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:44:03 by jkis              #+#    #+#             */
/*   Updated: 2025/02/25 09:17:09 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	add_shape(int x, int y, int column, int row)
{
	if ((row == 1) && (column == 1 || column == x))
	{
		ft_putchar('A');
	}
	else if (((row == 1 || row == y) && (column > 1 && column < x)) || ((row > 1 && row < y) && (column == 1 || column ==x)))
	{
		ft_putchar('B');
	}
	else if ((row == y) && (column == 1 || column == x))
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	column;
	int	row;
	
	if (x <= 0 || y <= 0)
	{
		return;
	}
	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			add_shape(x, y, column, row);
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}

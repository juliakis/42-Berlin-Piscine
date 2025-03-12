/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hslai <hslai@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:38:27 by hslai             #+#    #+#             */
/*   Updated: 2025/02/22 18:04:22 by hslai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	add_shape(int x, int y, int column, int row)
{
	if ((row == 1 || row == y) && (column == 1 || column == x))
	{
		ft_putchar('o');
	}
	else if ((row == 1 || row == y) && (column > 1 && column < x))
	{
		ft_putchar('-');
	}
	else if (column == 1 || column == x)
	{
		ft_putchar('|');
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
		return ;
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

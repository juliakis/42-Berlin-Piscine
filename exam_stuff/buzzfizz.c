/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buzzfizz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:20:28 by jkis              #+#    #+#             */
/*   Updated: 2025/03/07 20:30:26 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	if (nb >=10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write (1, &c, 1);
}
int	main(void)
{
	int	x;

	x = 1;
	while (x <= 100)
	{
		if (x % 4 == 0 && x % 7 == 0)
			write (1, "buzzfizz", 8);
		else if (x % 4 == 0)
			write (1, "buzz", 4);
		else if (x % 7 == 0)
			write (1, "fizz", 4);
		else
		{
			ft_putnbr(x);
		}
		write(1, "\n", 1);
		x++;
	}
	return (0);
}


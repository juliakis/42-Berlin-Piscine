/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:57:13 by jkis              #+#    #+#             */
/*   Updated: 2025/03/08 19:09:49 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_strlen(char *str)
{
	int	i; 
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	getposition(void)
{
	int	len;
	int	mod;
	char	*str;

	len = ft_strlen(av[1]);
	mod = len % 3;
	while (len > 0)
	{
		if (mod == 0)
			//hundreds
		if (mod == 1)
			//mil/bil
		if (mod == 2)
			//tens
		len--;
	}
	while (ft_strlen(str) <= len -1)
	{
		str = number * 10;
	}

}


int	main(int ac, char **av)
{
	(void)ac;
	int	x;

	x = 0;
	while (av[1][x] >= 48 && av[1][x] <= 57)
	{	
		if (ft_strlen(av[1]) >= 4 && ft_strlen(av[1]) <= 6)
			write(1, "thousand", 8);

	}
	return (0);
}

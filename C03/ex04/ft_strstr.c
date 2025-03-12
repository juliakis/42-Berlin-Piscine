/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:49:02 by jkis              #+#    #+#             */
/*   Updated: 2025/03/05 17:31:19 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	i;

	x = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[x] != '\0')
	{
		i = 0;
		while (str[x + i] == to_find[i] && to_find[i] != '\0')
		{
			i++;
		}
		if (to_find[i] == '\0')
		{
			return (&str[x]);
		}
		x++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	ac = ac + 0;

	printf("Result my function: %s\n", ft_strstr(av[1], av[2]));
	printf("Result strstr: %s\n", strstr(av[1], av[2]));
	return (0);

}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:30:21 by jkis              #+#    #+#             */
/*   Updated: 2025/03/13 13:40:40 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	char	temp;

	len = 0;
	while (str[len])
		len++;
	i = 0;
	while (i < (len / 2))
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
		i++;
	}
	return(str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "abcdef";
	printf("%s\n", ft_strrev(str));
	return (0);
}
*/

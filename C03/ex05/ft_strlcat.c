/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:33:43 by jkis              #+#    #+#             */
/*   Updated: 2025/03/06 13:34:36 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	result;
	unsigned int	dst_len;
	unsigned int	src_len;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	result = 0;
	if (dst_len < size)
		result = dst_len + src_len;
	else
		result = size + src_len;
	i = 0;
	while (src[i] != '\0' && dst_len < size - 1)
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = '\0';
	return (result);
}


#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "123";
	char	str2[] = "456793423432";

	printf("Result my function: %d\n", ft_strlcat(str1, str2, 20));
	return (0);
}


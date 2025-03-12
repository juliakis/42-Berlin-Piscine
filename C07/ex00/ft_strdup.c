/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:41:14 by jkis              #+#    #+#             */
/*   Updated: 2025/03/11 17:07:55 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		size;

	size = 0;
	while (src[size])
		size++;
	dest = (char *)malloc(sizeof(char) * (size + 1));
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "hello";
	char	dest[] = "";
	printf("%s\n", src);
	printf("%p\n", &src);
	ft_strdup(src);
	printf("%p\n", dest);
//	free(dest);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 22:05:18 by jkis              #+#    #+#             */
/*   Updated: 2025/03/07 22:26:14 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    rot13(char *str)
{
    int x = 0;
    char c;

    while (str[x])
    {
        c = str[x];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
                c += 13;
            else
                c -= 13;
        }
        write(1, &c, 1);
        x++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        rot13(av[1]);
    write(1, "\n", 1);
    return (0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 21:00:48 by jkis              #+#    #+#             */
/*   Updated: 2025/03/07 21:01:02 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int ac, char **av)
{
        int     i;
        int     count;
        char    c;

        i = 0;
        if (ac == 2)
        {
                while(av[1][i])
                {
                        c = av[1][i];
                        if ((c >= 'a' && c <= 'z'))
                                count = c - 'a';
                        if ((c >= 'A' && c <= 'Z'))
                                count = c - 'A';
                        while (count > 0)
                        {
                                write(1, &c, 1);
                                count--;
                        }
                }
                write (1, &c, 1);
                i++;
        }
        write (1, "\n", 1);
        return (0);
}


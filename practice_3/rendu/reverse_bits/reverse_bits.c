/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:02:26 by jkis              #+#    #+#             */
/*   Updated: 2025/03/13 13:28:22 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char result;
    int	i;

    i = 0;
    result = 0;
    while (i < 8) 
    {
        result = (result << 1) | (octet & 1); // Shift result left and add the LSB of octet
        octet >>= 1;
        i++;	// Shift octet right to process the next bit
    }
    return result;
}

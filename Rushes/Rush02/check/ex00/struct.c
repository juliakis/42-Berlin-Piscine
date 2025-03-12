/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkis <jkis@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:45:00 by jkis              #+#    #+#             */
/*   Updated: 2025/03/09 19:57:49 by jkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct NumberWord
{
	int		number;
	char	*word;
} NumberWord;

NumberWord	number_map[] = {
{0, "zero"},
{1, "one"},
{2, "two"},
{3, "three"},
{4, "four"},
{5, "five"},
{6, "six"},
{7, "seven"},
{8, "eight"},
{9, "nine"},
{10, "ten"},
{11, "eleven"},
{12, "twelve"},
{13, "thirteen"},
{14, "fourteen"},
{15, "fifteen"},
{16, "sixteen"},
{17, "seventeen"},
{18, "eighteen"},
{19, "nineteen"},
{20, "twenty"},
{30, "thirty"},
{40, "forty"},
{50, "fifty"},
{60, "sixty"},
{70, "seventy"},
{80, "eighty"},
{90, "ninety"},
{100, "hundred"},
{1000, "thousand"},
{1000000, "million"},
{1000000000, "billion"},
{1000000000000, "trillion"},
{1000000000000000, "quadrillion"},
{1000000000000000000, "quintillion"},
{1000000000000000000000, "sextillion"},
{1000000000000000000000000, "septillion"}, 
{1000000000000000000000000000, "octillion"},
{1000000000000000000000000000000, "nonillion"},
{1000000000000000000000000000000000, "decillion"},
{1000000000000000000000000000000000000, "undecillion"}
};

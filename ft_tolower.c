/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:13:51 by yustinov          #+#    #+#             */
/*   Updated: 2024/09/17 15:17:51 by yustinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}
/*
void    test_ft_tolower(char c, char expected)
{
    char result = ft_tolower(c);
    if (result == expected)
    {
        printf("Test passed: ft_tolower(%c) = %c\n", c, result);
    }
    else
    {
        printf("Test failed: ft_tolower(%c) = %c (expected: %c)\n",
       	c, result, expected);
    }
}

int main(void)
{
    // Test uppercase letters
    test_ft_tolower('A', 'a');
    test_ft_tolower('B', 'b');
    test_ft_tolower('Z', 'z');

    // Test lowercase letters (should remain unchanged)
    test_ft_tolower('a', 'a');
    test_ft_tolower('m', 'm');
    test_ft_tolower('z', 'z');

    // Test non-alphabetic characters (should remain unchanged)
    test_ft_tolower('1', '1');
    test_ft_tolower('@', '@');
    test_ft_tolower(' ', ' ');
    test_ft_tolower('\n', '\n');

    // Test boundary cases
    test_ft_tolower('@', '@'); // Character just before 'A'
    test_ft_tolower('[', '['); // Character just after 'Z'

    return 0;
}*/

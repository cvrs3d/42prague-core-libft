/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:06:48 by yustinov          #+#    #+#             */
/*   Updated: 2024/09/17 15:13:28 by yustinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}
/*
void    test_ft_toupper(char c, char expected)
{
    char result = ft_toupper(c);
    if (result == expected)
    {
        printf("Test passed: ft_toupper(%c) = %c\n", c, result);
    }
    else
    {
        printf("Test failed: ft_toupper(%c) = %c (expected: %c)\n",
       	c, result, expected);
    }
}

int main(void)
{
    // Test lowercase letters
    test_ft_toupper('a', 'A');
    test_ft_toupper('b', 'B');
    test_ft_toupper('z', 'Z');

    // Test uppercase letters (should remain unchanged)
    test_ft_toupper('A', 'A');
    test_ft_toupper('M', 'M');
    test_ft_toupper('Z', 'Z');

    // Test non-alphabetic characters (should remain unchanged)
    test_ft_toupper('1', '1');
    test_ft_toupper('@', '@');
    test_ft_toupper(' ', ' ');
    test_ft_toupper('\n', '\n');

    // Test boundary cases
    test_ft_toupper('`', '`'); // Character just before 'a'
    test_ft_toupper('{', '{'); // Character just after 'z'

    return 0;
}*/

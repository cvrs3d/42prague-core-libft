/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:47:51 by yustinov          #+#    #+#             */
/*   Updated: 2024/09/17 16:01:53 by yustinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	while (*s1 && *s2 && (n > 0))
	{
		if (n == 0)
		{
			return (0);
		}
		if (*s1 != *s2)
		{
			return ((unsigned char)(*s1) - (unsigned char)(*s2));
		}
		n--;
		s1++;
		s2++;
	}
	if (n > 0)
	{
		return ((unsigned char)(*s1) - (unsigned char)(*s2));
	}
	return (0);
}
/*
void test_ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
    int result_libft;
    int result_original;

    result_libft = ft_strncmp(s1, s2, n);
    result_original = strncmp(s1, s2, n);

    if (result_libft == result_original)
        printf("Test passed for inputs: \"%s\" and \"%s\", n: %u\n"
	, s1, s2, n);
    else
    {
        printf("Test failed for inputs: \"%s\" and \"%s\", n: %u\n"
	, s1, s2, n);
        printf("Expected: %d, got: %d\n", result_original, result_libft);
    }
}

int main()
{
    // Basic tests
    test_ft_strncmp("Hello", "Hello", 5); // Should return 0 
    test_ft_strncmp("Hello", "HelLo", 5);
    test_ft_strncmp("Hello", "Hell", 5);  // Should return a positive
    test_ft_strncmp("Hell", "Hello", 5);  // Should return a negative

    // Edge cases
    test_ft_strncmp("Hello", "Hello", 0); // Should return 0 (n is 
    test_ft_strncmp("", "", 1);          // Should return 0 (both are
    test_ft_strncmp("a", "", 1);      // Should return positive value
    test_ft_strncmp("", "a", 1);    // Should return negative valu
    test_ft_strncmp("abc", "abcd", 4); // Should return 0 (co

    return 0;
}*/

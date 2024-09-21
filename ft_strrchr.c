/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:39:56 by yustinov          #+#    #+#             */
/*   Updated: 2024/09/17 15:47:24 by yustinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_pos;

	last_pos = NULL;
	while (*s != '\0')
	{
		if (*s == (char) c)
		{
			last_pos = (char *) s;
		}
		s++;
	}
	if ((char) c == '\0')
	{
		return ((char *) s);
	}
	return (last_pos);
}
/*
void    test_ft_strrchr(const char *s, int c)
{
    char *result_libft;
    char *result_original;

    result_libft = ft_strrchr(s, c);
    result_original = strrchr(s, c);

    if (result_libft == result_original)
        printf("Test passed for input: \"%s\", char: '%c'\n", s, c);
    else
    {
        printf("Test failed for input: \"%s\", char: '%c'\n", s, c);
        printf("Expected: %p, got: %p\n", result_original, result_libft);
    }
}

int main()
{
    // Basic tests
    test_ft_strrchr("Hello, world!", 'o');      // Should find last 'o'
    test_ft_strrchr("Hello, world!", 'H');      // Should find 'H'
    test_ft_strrchr("Hello, world!", 'w');      // Should find 'w'

    // Edge cases
    test_ft_strrchr("Hello, world!", '\0');// Should return pointer toterminator
    test_ft_strrchr("", '\0');    // Empty string, should return pointer to '\0'

    // Character not found
    test_ft_strrchr("Hello, world!", 'z');      // Should return NULL

    // Test with non-printable character
    test_ft_strrchr("abc\ndef", '\n');          // Should find '\n'

    return 0;
}*/

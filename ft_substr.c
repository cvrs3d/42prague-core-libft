/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:19:45 by yustinov          #+#    #+#             */
/*   Updated: 2024/09/18 09:50:30 by yustinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*ptr;
	size_t	str_len;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	if (len > str_len - start)
		len = str_len - start;
	sub = (char *)malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	ptr = sub;
	s = s + start;
	while (*s && len > 0)
	{
		*sub++ = *s++;
		len--;
	}
	*sub = '\0';
	return (ptr);
}
/*
void test_ft_substr()
{
    char *result;

    // Test 1: Normal case
    result = ft_substr("hello world", 6, 5);
    printf("Test 1: %s\n", result);  // Expected output: "world"
    free(result);

    // Test 2: Start index out of bounds
    result = ft_substr("hello", 10, 3);
    printf("Test 2: %s\n", result);  // Expected output: "" (empty string)
    free(result);

    // Test 3: Length greater than remaining string
    result = ft_substr("test string", 5, 20);
    printf("Test 3: %s\n", result);  // Expected output: "string"
    free(result);

    // Test 4: Start index at the very end of the string (empty substring)
    result = ft_substr("abcde", 5, 2);
    printf("Test 4: %s\n", result);  // Expected output: "" (empty string)
    free(result);

    // Test 5: Substring of length 0
    result = ft_substr("abcdef", 2, 0);
    printf("Test 5: %s\n", result);  // Expected output: "" (empty string)
    free(result);
}

int main()
{
    test_ft_substr();
    return 0;
}*/

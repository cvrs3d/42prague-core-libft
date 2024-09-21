/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:41:56 by yustinov          #+#    #+#             */
/*   Updated: 2024/09/18 09:58:00 by yustinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	slen1;
	size_t	slen2;
	char	*joined;
	char	*dummy;

	if (!s1 || !s2)
		return (NULL);
	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	joined = (char *)malloc(slen1 + slen2 + 1);
	if (joined == NULL)
		return (NULL);
	dummy = joined;
	while (*s1)
		*dummy++ = *s1++;
	while (*s2)
		*dummy++ = *s2++;
	*dummy = '\0';
	return (joined);
}
/*
void test_ft_strjoin()
{
    char *result;

    // Test 1: Joining two normal strings
    result = ft_strjoin("Hello", " World");
    printf("Expected : Hello World");
    printf("Test 1: %s\n", result);
    free(result);

    // Test 2: Joining an empty string with a non-empty string
    result = ft_strjoin("", "Test");
    printf("Expected: Test");
    printf("Test 2: %s\n", result);
    free(result);

    // Test 3: Joining a non-empty string with an empty string
    result = ft_strjoin("Test", "");
    printf("Expected: Test");
    printf("Test 3: %s\n", result);
    free(result);

    // Test 4: Joining two empty strings
    result = ft_strjoin("", "");
    printf("Expected: \"\"");
    printf("Test 4: %s\n", result);
    free(result);

    // Test 5: Joining two longer strings
    result = ft_strjoin("This is a long string.",
		    " And this is another.");
    printf("Expected: This is a long string. And this is another.");
    printf("Test 5: %s\n", result);
    free(result);

    // Test 6: Passing NULL to one of the strings
    result = ft_strjoin(NULL, "test");
    printf("Expected: NULL");
    printf("Test 6: %s\n", result ? result : "NULL");
    free(result);
}

int main()
{
    test_ft_strjoin();
    return 0;
}*/

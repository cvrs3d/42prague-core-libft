/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:46:59 by yustinov          #+#    #+#             */
/*   Updated: 2024/09/17 17:46:01 by yustinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	while (*s != '\0')
	{
		s++;
		size++;
	}
	return (size);
}
/*
int main() {
    // Test cases
    const char *test_str1 = "Hello, world!";
    const char *test_str2 = "C programming";
    const char *test_str3 = "";

    printf("Length of '%s': %lu\n", test_str1, ft_strlen(test_str1));
    printf("Length of '%s': %lu\n", test_str2, ft_strlen(test_str2));
    printf("Length of empty string: %lu\n", ft_strlen(test_str3));

    return 0;
}*/

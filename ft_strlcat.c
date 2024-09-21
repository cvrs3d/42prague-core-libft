/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:46:59 by yustinov          #+#    #+#             */
/*   Updated: 2024/09/17 17:48:06 by yustinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	total;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	total = dst_len + src_len;
	if (size <= dst_len)
		return (size + src_len);
	size -= dst_len;
	dst += dst_len;
	if (size > 0)
	{
		while (*src && size > 1)
		{
			*dst++ = *src++;
			size--;
		}
		*dst = '\0';
	}
	return (total);
}
/*
int main() {
    char buffer[50] = "Hello, ";
    char src[] = "world!";

    // Test case 1: Enough space in buffer
    long unsigned int len = ft_strlcat(buffer, src, sizeof(buffer));
    printf("Destination after concatenation: '%s'\n", buffer);
    printf("Length of the concatenated string: %lu\n", len);

    // Test case 2: Insufficient space in buffer
    char buffer_small[10] = "Hello, ";
    len = ft_strlcat(buffer_small, src, sizeof(buffer_small));
    printf("Destination after concatenation with small buffer: '%s'\n"
    , buffer_small);
    printf("Length of the concatenated string: %lu\n", len);

    return 0;
}*/

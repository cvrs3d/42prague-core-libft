/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:25:32 by yustinov          #+#    #+#             */
/*   Updated: 2024/09/17 17:49:17 by yustinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t	size)
{
	size_t		src_size;
	const char	*ptr;

	src_size = 0;
	ptr = src;
	while (*ptr != '\0')
	{
		src_size++;
		ptr++;
	}
	if (size > 0)
	{
		while (size > 1 && *src != '\0')
		{
			*dst = *src;
			dst++;
			src++;
			size--;
		}
		*dst = '\0';
	}
	return (src_size);
}
/*
int main() {
    char src[] = "Hello, world!";
    char dst[20];

    // Test case 1: Copy with enough space
    long unsigned int len = ft_strlcpy(dst, src, sizeof(dst));
    printf("Destination after copy with enough space: '%s'\n", dst);
    printf("Length of source: %lu\n", len);

    // Test case 2: Copy with insufficient space
    char dst_small[5];
    len = ft_strlcpy(dst_small, src, sizeof(dst_small));
    printf("Destination after copy with insufficient space: '%s'\n", dst_small);
    printf("Length of source: %lu\n", len);

    return 0;
}*/

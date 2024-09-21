/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:58:26 by yustinov          #+#    #+#             */
/*   Updated: 2024/09/18 10:31:26 by yustinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

static int	in(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && in(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && in(s1[end - 1], set))
		end--;
	len = end - start;
	trimmed = (char *)malloc(len + 1);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, len + 1);
	return (trimmed);
}
/*

int main(void)
{
    char *result = ft_strtrim("  hello world  ", " ");
    printf("Result: '%s'\n", result);  // Expected output: "hello world"
    free(result);

    result = ft_strtrim("--hello--", "-");
    printf("Result: '%s'\n", result);  // Expected output: "hello"
    free(result);

    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:26:20 by yustinov          #+#    #+#             */
/*   Updated: 2024/09/18 12:40:05 by yustinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*res;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
char to_upper(unsigned int index, char c)
{
    (void)index;  // Unused in this function
    if (c >= 'a' && c <= 'z')
        return c - 32;  // Convert to uppercase
    return c;
}

int main(void)
{
    char *result = ft_strmapi("hello world", to_upper);
    if (result)
    {
        printf("Result: %s\n", result);  // Expected output: "HELLO WORLD"
        free(result);
    }
    return 0;
}*/

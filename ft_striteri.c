/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:42:51 by yustinov          #+#    #+#             */
/*   Updated: 2024/09/18 12:49:52 by yustinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void to_upper(unsigned int index, char *c)
{
    (void)index;  // Index is not used in this function
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;  // Convert to uppercase
}

int main(void)
{
    char str[] = "hello world";
    ft_striteri(str, to_upper);
    printf("Result: %s\n", str);  // Expected output: "HELLO WORLD"
    return 0;
}*/

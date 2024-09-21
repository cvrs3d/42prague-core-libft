/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:48:11 by yustinov          #+#    #+#             */
/*   Updated: 2024/09/17 18:16:45 by yustinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t	len)
{
	const char	*b;
	const char	*l;
	size_t		i;

	if (*little == '\0')
		return ((char *)big);
	while (*big && len > 0)
	{
		b = big;
		l = little;
		i = len;
		while (*b && i > 0 && *l && *b == *l)
		{
			b++;
			l++;
			i--;
		}
		if (*l == '\0')
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}

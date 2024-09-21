/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:29:16 by yustinov          #+#    #+#             */
/*   Updated: 2024/09/20 14:35:01 by yustinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int n)
{
	long	i;
	int		len;

	i = (long)n;
	if (i <= 0)
	{
		i = -i;
		len = 1;
	}
	else
		len = 0;
	while (i)
	{
		len++;
		i /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	m;
	char	*str;
	int		i;

	i = numlen(n) - 1;
	m = (long)n;
	str = (char *)malloc((i + 2) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[i + 1] = 0;
	if (n == 0)
		str[i] = '0';
	if (n < 0)
	{
		str[0] = '-';
		m = -m;
	}
	while (m != 0)
	{
		str[i] = m % 10 + '0';
		m /= 10;
		i--;
	}
	return (str);
}

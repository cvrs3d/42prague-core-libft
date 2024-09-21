/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:18:36 by yustinov          #+#    #+#             */
/*   Updated: 2024/09/18 09:17:49 by yustinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	safe(size_t a, size_t b, size_t *result)
{
	size_t	maxval;

	maxval = (size_t)-1;
	if (a == 0 || b == 0)
	{
		*result = 0;
		return (1);
	}
	if (a > maxval / b)
		return (0);
	*result = a * b;
	return (1);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*ptr;

	if (safe(nmemb, size, &total) == 0)
		return (NULL);
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total);
	return (ptr);
}

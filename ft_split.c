/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:32:19 by yustinov          #+#    #+#             */
/*   Updated: 2024/09/21 14:40:52 by yustinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sep(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

static int	count_s(char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && check_sep(s[i], c))
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && !check_sep(s[i], c))
			i++;
	}
	return (count);
}

static int	strlen_sep(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && !check_sep(s[i], c))
		i++;
	return (i);
}

static char	*makeword(char *s, char c)
{
	int		wlen;
	int		i;
	char	*word;

	i = 0;
	wlen = strlen_sep(s, c);
	word = (char *)malloc((wlen + 1) * sizeof(char));
	while (i < wlen)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	split = (char **)malloc((count_s((char *)s, c) + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	while (s[j] != '\0')
	{
		while (s[j] != '\0' && check_sep(s[j], c))
			j++;
		if (s[j] != '\0')
		{
			split[i] = makeword(&((char *)s)[j], c);
			i++;
		}
		while (s[j] != '\0' && !check_sep(s[j], c))
			j++;
	}
	split[i] = 0;
	return (split);
}

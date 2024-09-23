/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:32:19 by yustinov          #+#    #+#             */
/*   Updated: 2024/09/23 14:16:18 by yustinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Implement freeall() static func*/
static void	*freeall(char **split, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && split[i] != NULL)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static int	count_s(char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (count);
}

static int	strlen_sep(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
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
	if (word == NULL)
		return (NULL);
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
	char			**split;
	unsigned int	size;

	if (s == NULL)
		return (NULL);
	split = (char **)malloc((count_s((char *)s, c) + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	size = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			split[size] = makeword((char *)s, c);
			if (split[size] == NULL)
				return (freeall(split, size));
			size++;
		}
		while (*s != '\0' && *s != c)
			s++;
	}
	split[size] = 0;
	return (split);
}
/*
#include <stdio.h>

void print_split(char **split)
{
    for (int i = 0; split[i] != NULL; i++)
    {
        printf("Word[%d]: %s\n", i, split[i]);
    }
}

int main()
{
    char **result;

    result = ft_split("Hello, world! This is a test.", ' ');
    print_split(result);
    // Free allocated memory after testing
    freeall(result, count_s("Hello, world! This is a test.", ' '));

    result = ft_split("   Leading and trailing spaces   ", ' ');
    print_split(result);
    freeall(result, count_s("   Leading and trailing spaces   ", ' '));

    result = ft_split("Multiple  spaces", ' ');
    print_split(result);
    freeall(result, count_s("Multiple  spaces", ' '));

    return 0;
}*/

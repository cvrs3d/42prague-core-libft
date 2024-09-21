/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:10:48 by yustinov          #+#    #+#             */
/*   Updated: 2024/09/20 17:14:21 by yustinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	i;

	i = 0;
	if (!s)
		write (fd, "(null)", 6);
	while (s[i])
	{
		write (fd, &s[i], 1);
		s++;
	}
	write (fd, "\n", 1);
}
/*
int main(void)
{
    // Write to standard output
    ft_putendl_fd("Hello, World!", STDOUT_FILENO);

    // Write to a file
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd != -1)
    {
        ft_putendl_fd("Writing to a file with a newline.", fd);
        close(fd);
    }

    return 0;
}*/
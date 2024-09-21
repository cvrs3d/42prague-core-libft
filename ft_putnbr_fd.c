/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:25:30 by yustinov          #+#    #+#             */
/*   Updated: 2024/09/18 13:38:21 by yustinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <fcntl.h>

static void	recursive(int fd, long num)
{
	char	c;

	if (num >= 10)
	{
		recursive(fd, num / 10);
	}
	c = (num % 10) + '0';
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	if (n < 0)
	{
		write(fd, "-", 1);
		num = -((long)n);
	}
	else
		num = (long)n;
	recursive(fd, num);
}
/*
int main(void)
{
    // Write to standard output
    ft_putnbr_fd(12345, STDOUT_FILENO);
    write(STDOUT_FILENO, "\n", 1);
    ft_putnbr_fd(-12345, STDOUT_FILENO);
    write(STDOUT_FILENO, "\n", 1);

    // Write to a file
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd != -1)
    {
        ft_putnbr_fd(67890, fd);
        write(fd, "\n", 1);
        ft_putnbr_fd(-67890, fd);
        close(fd);
    }

    return 0;
}*/

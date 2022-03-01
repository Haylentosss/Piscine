/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturan <yturan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:48:09 by yturan            #+#    #+#             */
/*   Updated: 2022/02/15 18:36:20 by yturan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int e)
{
	if (e == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (e < 0)
	{
		ft_putchar('-');
		ft_putnbr(-e);
	}
	else if (e > 9)
	{
		ft_putnbr(e / 10);
		ft_putnbr(e % 10);
	}
	else
	{
		ft_putchar (e + 48);
	}
}

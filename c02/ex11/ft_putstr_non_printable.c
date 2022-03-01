/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturan < yturan@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:43:28 by yturan            #+#    #+#             */
/*   Updated: 2022/02/22 12:46:43 by yturan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_dec_to_hex(unsigned char n)
{
	char	*unp;

	unp = "0123456789abcdef";
	ft_putchar(unp[n / 16]);
	ft_putchar(unp[n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 32 || str[a] == 127)
		{
			ft_putchar('\\');
			ft_dec_to_hex(str[a]);
		}
		else
			ft_putchar(str[a]);
		a++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:37:54 by yturan            #+#    #+#             */
/*   Updated: 2022/02/14 11:48:31 by yturan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{		
		write(1, &c, 1);
}

void	rush(int x, int y)
{
		int p;
		int r;

		r = 1;
		while(r <= y && x > 0)
			{
				p = 1;
				while(p <= x)
				{
					if ((p == 1 || p == x) && (r == 1 || r == y))
						ft_putchar('o');
					else if((p != 1 || p != x) && (r == 1 || r == y))
						ft_putchar('-');
					else if((p == 1 || p == x) && (r != 1 || r != y))
						ft_putchar('|');
					else if((p != 1 || p != x) && (r != 1 || r != y))
						ft_putchar(' ');
					p++;
				}
				ft_putchar('\n');
				r++;
			}
}

int main()
{
	rush(5,4);
}


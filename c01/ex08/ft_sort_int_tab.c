/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturan < yturan@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:23:40 by yturan            #+#    #+#             */
/*   Updated: 2022/02/17 17:45:21 by yturan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	gecici;

	a = 0;
	while (a < size)
	{
		b = 1;
		while (b < size - a)
		{
			if (tab[b - 1] > tab[b])
			{
				gecici = tab [b];
				tab [b] = tab[b - 1];
				tab [b - 1] = gecici;
			}
			b++;
		}
		a++;
	}
}

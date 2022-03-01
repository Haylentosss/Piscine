/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturan < yturan@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:35:05 by yturan            #+#    #+#             */
/*   Updated: 2022/02/17 16:09:25 by yturan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_int_tab(int	*tab, int size)
{
	int	index;
	int	gecici;

	index = 0;
	while (index < (size / 2))
	{
		gecici = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = gecici;
		index++;
	}
}

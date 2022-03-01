/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturan < yturan@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 20:35:25 by yturan            #+#    #+#             */
/*   Updated: 2022/03/01 12:53:57 by yturan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char	*s1, char	*s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int ac, char **av)
{
	int		c;
	int		i;
	char	*bucket;

	c = 1;
	while (c <= ac)
	{
		i = 2;
		while (i <= ac - 1)
		{
			if (ft_strcmp(av[i], av[i - 1]) < 0)
			{
				bucket = av[i];
				av[i] = av[i - 1];
				av[i - 1] = bucket;
			}
			i++;
		}
		c++;
	}
	c = 0;
	while (++c < ac)
		ft_putstr(av [c]);
}

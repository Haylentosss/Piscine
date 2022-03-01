/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturan < yturan@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:23:32 by yturan            #+#    #+#             */
/*   Updated: 2022/02/21 16:17:50 by yturan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strlowcase(char	*str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'A') && (str[x] <= 'Z'))
			str[x] += 'a' - 'A';
		x++;
	}
	return (str);
}

char	*ft_strcapitalize(char	*str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	ft_strlowcase(str);
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			if (b == 1)
			{
				str[a] -= 'a' - 'A';
				b = 0;
			}
		}
		else if (str[a] >= '0' && str[a] <= '9')
		{
			b = 0;
		}
		else
			b = 1;
		a++;
	}
	return (str);
}

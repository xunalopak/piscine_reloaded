/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:53:28 by rchampli          #+#    #+#             */
/*   Updated: 2021/10/09 11:53:28 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i <= INT_MAX && i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

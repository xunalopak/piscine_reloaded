/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:45:32 by rchampli          #+#    #+#             */
/*   Updated: 2021/09/10 13:45:32 by rchampli         ###   ########.fr       */
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

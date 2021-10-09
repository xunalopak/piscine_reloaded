/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:52:19 by rchampli          #+#    #+#             */
/*   Updated: 2021/10/09 11:52:19 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	len;
	int	i;

	i = 0;
	len = max - min;
	if (len <= 0)
		return (NULL);
	dest = malloc(sizeof(int) * len);
	if (!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}

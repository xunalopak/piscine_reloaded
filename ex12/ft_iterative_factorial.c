/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:18:46 by rchampli          #+#    #+#             */
/*   Updated: 2021/09/10 13:18:46 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	i = 1;
	fact = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}

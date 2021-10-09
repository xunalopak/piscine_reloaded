/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:53:10 by rchampli          #+#    #+#             */
/*   Updated: 2021/10/09 11:53:10 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(unsigned char *s1, unsigned char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if (s2[i] == '\0')
		return (0);
	else
		return (s1[i] - s2[i]);
}

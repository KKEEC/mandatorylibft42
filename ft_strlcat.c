/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:48:29 by kkc               #+#    #+#             */
/*   Updated: 2024/11/18 13:57:25 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *to, const char *from, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	fromlen;

	i = 0;
	j = 0;
	fromlen = ft_strlen(from);
	while (i < size && to[i])
		i++;
	while ((i + j + 1) < size && from[j])
	{
		to[i + j] = from[j];
		j++;
	}
	if (i != size)
		to[i + j] = '\0';
	return (i + fromlen);
}

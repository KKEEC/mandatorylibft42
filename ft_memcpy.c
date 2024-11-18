/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:06:07 by kkc               #+#    #+#             */
/*   Updated: 2024/11/18 11:41:25 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t size)
{
	size_t	i;
	char	*dest;
	char	*src;

	dest = (char *)to;
	src = (char *)from;
	i = 0;
	while ((dest || src) && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (to);
}

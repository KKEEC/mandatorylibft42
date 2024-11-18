/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:00:53 by kkc               #+#    #+#             */
/*   Updated: 2024/11/18 16:04:12 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		j;
	void	*match;

	j = ft_strlen(str);
	match = 0;
	while (j >= 0)
	{
		if (str[j] == (char)c)
		{
			match = (char *)&str[j];
			break ;
		}
		else
			j--;
	}
	return ((char *)match);
}

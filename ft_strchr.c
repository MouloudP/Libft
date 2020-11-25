/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdoun <ahamdoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:18:25 by ahamdoun          #+#    #+#             */
/*   Updated: 2020/11/23 11:57:09 by ahamdoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, char c)
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *)s+ i);
		i++;
	}
	if (s[i] == (c))
		return ((char *)s+ i);
	return (NULL);
}

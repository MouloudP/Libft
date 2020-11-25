/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdoun <ahamdoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 09:56:29 by ahamdoun          #+#    #+#             */
/*   Updated: 2020/11/25 11:21:03 by ahamdoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	while (s1[i] && i < n)
	{
		j = 0;
		while(s2[j] == s1[i + j])
		{
			if (s2[j + 1] == '\0')
				return (char *)(s1 + i);
			j++;
		}
		i++;	
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdoun <ahamdoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 09:45:42 by ahamdoun          #+#    #+#             */
/*   Updated: 2020/11/23 11:43:38 by ahamdoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	size_str(const char *s)
{
	size_t len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t dest_len;

	i = 0;
	j = 0;
	dest_len = ft_strlen(dest);
	while (dest[i] && i < size)
		i++;
	while (src[j] && i < size - 1)
		dest[i++] = src[j++];
	if (size != 0 && size >= dest_len)
		dest[i] = '\0';
	if (size < (size_t)ft_strlen(dest))
		return (size_str(src) + size);
	else
		return (size_str(src) + dest_len);

}	

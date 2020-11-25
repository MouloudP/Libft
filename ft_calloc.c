/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdoun <ahamdoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:19:12 by ahamdoun          #+#    #+#             */
/*   Updated: 2020/11/23 11:53:30 by ahamdoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *copy;

	if (!(copy = malloc(size * count)))
		return (NULL);
	ft_memset(copy, 0, count * size);
	return (copy);
}

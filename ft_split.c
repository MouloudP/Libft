/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdoun </var/mail/ahamdoun>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 11:17:38 by ahamdoun          #+#    #+#             */
/*   Updated: 2020/12/12 11:34:12 by ahamdoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*ft_freetab(char **tab, size_t n)
{
	size_t		count;

	count = 0;
	while (count < n)
	{
		free(tab[count]);
		count++;
	}
	free(tab);
	return (NULL);
}

static size_t	ft_size_str(char const *str, char c)
{
	size_t		size;
	int			finish;

	size = 0;
	finish = 1;
	if (!str)
		return (size);
	while (*str != '\0')
	{
		if (*str != c && finish)
			size++;
		finish = *str == c;
		str++;
	}
	return (size);
}

static char		*ft_create_word(char const *str, size_t n)
{
	size_t		count;
	char		*dest;

	if (!(dest = malloc(sizeof(char) * (n + 1))))
		return (NULL);
	count = 0;
	while (count < n)
	{
		dest[count] = str[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

char			**ft_split(char const *str, char c)
{
	char		**tab;
	size_t		n;
	size_t		count;
	size_t		i;

	n = ft_size_str(str, c);
	if (!(tab = malloc(sizeof(char *) * (n + 1))))
		return (NULL);
	i = 0;
	while (i < n && str)
	{
		count = 0;
		while (*str && *str == c)
			str++;
		while (*str && *str != c)
		{
			count++;
			str++;
		}
		if (!(tab[i] = ft_create_word((str - n), n)))
			return (ft_freetab(tab, i));
		i++;
	}
	tab[n] = NULL;
	return (tab);
}

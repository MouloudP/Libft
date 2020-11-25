/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdoun <ahamdoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 21:00:23 by ahamdoun          #+#    #+#             */
/*   Updated: 2020/11/20 12:36:06 by ahamdoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(const char *s, char c)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_effect_split(char const *s, char c, char **tbl)
{
	int	i;
	int	j;
	int 	count;

	i = 0;
	j = 0;
	count = 0;
	while(s[i])
	{
		if (s[i] == c)
		{
			tbl[count][j] = '\0';
			count++;
			j = 0;
		}
		else
		{
			tbl[count][j] = s[i];
			j++;
		}	
		i++;
	}
	tbl[count] = NULL;
	return (tbl);
}

char	**ft_split(char const *s, char c)
{
	char	**tbl;
	int	word;
	int 	i;
	int 	j;
	int 	count;

	word = ft_wordcount(s, c);
	if (!(tbl = (char **)malloc(sizeof(char *) * (word + 1))))
		return (NULL);
	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
		{	
			if (!(tbl[j] = (char *)malloc(sizeof(char) * (count + 1))))
				return (NULL);
			count = 0;
			j++;
		}
		else
			count++;
		i++;
	}
	if (!(s[i]))
		if (!(tbl[j] = (char *)malloc(sizeof(char) * (count + 1))))
			return (NULL);
	return (ft_effect_split(s, c, tbl));
}

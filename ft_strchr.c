/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ousabbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:58:26 by ousabbar          #+#    #+#             */
/*   Updated: 2023/11/01 08:58:27 by ousabbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	int		i;
	char	k;

	i = 0;
	k = (char)c;
	while (s[i])
	{
		if (s[i] == k)
			return (k);
		i++;
	}
	return (NULL);
}

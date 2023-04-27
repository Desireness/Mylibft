/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raizquie <raizquie@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:25:55 by raizquie          #+#    #+#             */
/*   Updated: 2023/04/26 16:17:24 by raizquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last = NULL;

	while (*s)
	{
		if (*s == (char)c)
		{
			last = s;
		}
		s++;
	}
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	return ((char *)last);
}

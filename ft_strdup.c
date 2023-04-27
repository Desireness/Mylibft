/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raizquie <raizquie@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:10:36 by raizquie          #+#    #+#             */
/*   Updated: 2023/03/03 19:10:37 by raizquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*ptr;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ptr = str;
	while (*s1)
		*ptr++ = *s1++;
	*ptr = '\0';
	return (str);
}

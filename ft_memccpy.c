/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raizquie <raizquie@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:40:29 by raizquie          #+#    #+#             */
/*   Updated: 2023/04/26 13:08:00 by raizquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_cpy;
	unsigned char	*src_cpy;

	dst_cpy = (unsigned char *)dst;
	src_cpy = (unsigned char *)src;
	while (n--)
	{
		*dst_cpy = *src_cpy;
		if (*src_cpy == (unsigned char)c)
			return (dst_cpy + 1);
		dst_cpy++;
		src_cpy++;
	}
	return (NULL);
}

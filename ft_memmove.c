/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raizquie <raizquie@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:17:25 by raizquie          #+#    #+#             */
/*   Updated: 2023/04/26 19:02:57 by raizquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_cpy;
	const unsigned char	*src_cpy;

	if (!dst && !src)
		return (NULL);
	dst_cpy = (unsigned char *)dst;
	src_cpy = (const unsigned char *)src;
	if (dst_cpy < src_cpy)
	{
		while (len--)
			*dst_cpy++ = *src_cpy++;
	}
	else
	{
		dst_cpy += len - 1;
		src_cpy += len - 1;
		while (len--)
			*dst_cpy-- = *src_cpy--;
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raizquie <raizquie@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:11:51 by raizquie          #+#    #+#             */
/*   Updated: 2023/04/26 19:02:53 by raizquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_cpy;
	unsigned char	*src_cpy;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_cpy = (unsigned char *)dst;
	src_cpy = (unsigned char *)src;
	while (n-- > 0)
		*dst_cpy++ = *src_cpy++;
	return (dst);
}

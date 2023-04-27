/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raizquie <raizquie@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:20:04 by raizquie          #+#    #+#             */
/*   Updated: 2023/04/26 12:05:26 by raizquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_len(int n)
{
	int	len;

	len = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = (n < 0);
	if (sign)
		n = -n;
	len = get_num_len(n) + sign;
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (sign)
		str[0] = '-';
	while (n / 10 != 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	str[--len] = (n % 10) + '0';
	return (str);
}

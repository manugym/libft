/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumuno <manumuno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:12:11 by manumuno          #+#    #+#             */
/*   Updated: 2023/10/04 12:39:24 by manumuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest2;
	const char	*src2;

	if (!src && !dst)
		return (0);
	dest2 = (char *)dst;
	src2 = (const char *)src;
	while (n-- > 0)
	{
	*(dest2 + n) = *(src2 + n);
	}
	return (dst);
}

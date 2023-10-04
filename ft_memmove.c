/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumuno <manumuno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:26:39 by manumuno          #+#    #+#             */
/*   Updated: 2023/10/04 12:47:33 by manumuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst2;
	char	*src2;

	dst2 = (char *)dst;
	src2 = (char *)src;
	if (src2 == dst2 || len == 0)
		return (dst);
	if (src2 < dst2)
	{	
		src2 = src2 + len - 1;
		dst2 = dst2 + len - 1;
		while (len-- > 0)
		{
			*dst2-- = *src2--;
		}
	}
	else if (src2 >= dst2)
	{
		while (len -- > 0)
		{
			*dst2++ = *src2++;
		}
	}	
	return (dst);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <libc.h>
int main(int ac, char **av)
{
	printf("%s\n", ft_memmove(av[1], av[2], atoi(av[3])));
	printf("%s\n", memmove(av[1], av[2], atoi(av[3])));
}*/

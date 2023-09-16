/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumuno <manumuno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:20:37 by manumuno          #+#    #+#             */
/*   Updated: 2023/09/16 20:41:08 by manumuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	ft_memset(str, 0, len);
}

int	main()
{
	char str[20] = "hola mundo";
	ft_bzero(str, 3);
	printf("%o\n", str[0]);
	printf("%o\n", str[1]);
	printf("%o\n", str[2]);
	printf("%o\n", str[3]);
	printf("%o\n", str[4]);
	printf("%o\n", str[5]);
}

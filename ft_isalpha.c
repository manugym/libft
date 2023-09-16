/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumuno <manumuno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:01:49 by manumuno          #+#    #+#             */
/*   Updated: 2023/09/14 18:55:50 by manumuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*
int	main(int ac, char **av)
{
	ac = 2;
	printf("%i\n", ft_isalpha(atoi(av[1])));
	printf("%i\n", isalpha(atoi(av[1])));
	return (0);
}*/

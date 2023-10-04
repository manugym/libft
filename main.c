/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumuno <manumuno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:45:11 by manumuno          #+#    #+#             */
/*   Updated: 2023/09/20 13:02:25 by manumuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	main(int ac, char **av)
{
	printf("%i\n", ft_isalpha(atoi(av[1])));
	printf("%i\n", ft_isdigit(atoi(av[1])));
	printf("%i\n", ft_isalnum(atoi(av[1])));
	printf("%i\n", ft_isascii(atoi(av[1])));
	printf("%i\n", ft_isprint(atoi(av[1])));

int	main(int ac, char **av)
{
	printf("%s\n", ft_memset(av[1], atoi(av[2]), atoi(av[ 3])));
	printf("%s\n", memset(av [1], atoi(av[2]), atoi(av[3])));
}
*/
int main(int ac, char **av)
{
	printf("%s\n", ft_memcpy(av[1], av[2], atoi(av[3])));
	printf("%s\n", memcpy(av[1], av[2], atoi(av[3])));
}

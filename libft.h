/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumuno <manumuno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:28:14 by manumuno          #+#    #+#             */
/*   Updated: 2023/10/04 12:45:58 by manumuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int		ft_isalpha(int c);
//alphabetic character test
int		ft_isdigit(int c);
//decimal-digit character test
int		ft_isalnum(int c);
//alphanumeric character test
int		ft_isascii(int c);
//test for ASCII character
int		ft_isprint(int c);
//printing character test (space character inclusive)
size_t	ft_strlen(const char *s);
//find length of string
void	*ft_memset(void *str, int c, size_t len);
//fill a byte string with a byte value
void	ft_bzero(void *str, size_t len);
//write zeroes to a byte string
void	*ft_memcpy(void *dst, const void *src, size_t n);
//copy memory area
void	*ft_memmove(void *dst, const void *src, size_t len);
//copy byte string; copy in a non-destructive manner

#endif

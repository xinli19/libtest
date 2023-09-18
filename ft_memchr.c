/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:39:37 by xili              #+#    #+#             */
/*   Updated: 2023/09/14 14:39:03 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*str;
	unsigned char		c_char;

	i = 0;
	str = (unsigned const char *)s;
	c_char = (unsigned char) c;
	while (i < n)
	{
		if (str[i] == c_char)
			return ((void *)&str[i]);
		else
			i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char arr[] = "hello world";
	char data[0];
	char *result = (char *)ft_memchr(data,'p',sizeof(data));
	printf("%s\n",(char *)ft_memchr(data,'p',sizeof(data)));
	printf("%s\n",result);
}
*/

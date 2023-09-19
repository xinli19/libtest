/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:51:09 by xili              #+#    #+#             */
/*   Updated: 2023/09/18 17:18:10 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>


size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d_len;

	i = 0;
	if (size <= ft_strlen(dst))
		return (size + ft_strlen((char *)src));
	d_len = ft_strlen((char *)dst);
	while (src[i] != '\0' && (size - 1 > d_len))
	{
		dst[d_len] = src[i];
		i++;
		d_len++;
	}
	dst[d_len] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
/*	
int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char dest[30] = "rrrrrr";	
	printf("my:%zu\n",ft_strlcat(dest,"lorem ipsum dolor sit amet", 7));
	printf("original%zu",strlcat(dest,"lorem ipsum dolor sit amet", 7));
}
*/

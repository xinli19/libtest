/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:33:06 by xili              #+#    #+#             */
/*   Updated: 2023/09/18 17:30:09 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;

	i = 0;
	if (dest == src || len == 0)
		return (dest);
	if ((unsigned char *)src < (unsigned char *)dest)
	{
		while (len > i)
		{
			((unsigned char *)dest)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		while (len-- > 0)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char src[] = "lorem ipsum dolor sit amet";
	char	*p;
	p = src + 1;
	printf("%s\n",p);
	
	printf("my function: %s\n",(char *)ft_memmove(src, p, 8));
	printf("original function: %s",(char *)memmove(src, p, 8));
		return (0);
}
*/

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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (d == s || !s)
		return (d);
	if (s < d)
	{
		while (len > i)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	else
	{
		while (len-- > 0)
			d[i++] = s[i++];
	}
	return (d);
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

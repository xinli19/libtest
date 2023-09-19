/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:47:17 by xili              #+#    #+#             */
/*   Updated: 2023/09/14 15:13:14 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	chr;

	str = (char *)s;
	i = 0;
	chr = (char)c;
	if (str[i] == '\0' && c != '\0')
		return (NULL);
	while (str[i] != chr)
	{
		if (!str[i])
			return (NULL);
		else
			i++;
	}
	return (&str[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	char a[3] = "abc";
	int b = 98;
	char *result =ft_strchr(a,b);
	printf("%s",result);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:47:35 by xili              #+#    #+#             */
/*   Updated: 2023/09/18 17:28:12 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		s_len;
	char		*substr;

	i = 0;
	s_len = ft_strlen((char *)s);
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	while (i < len && s[start] && (size_t)start < s_len)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
/*
#include <stdio.h>
int	main(void)
{
	char a[11] = "helloworld";
	printf("start is out of the string: %s\n",ft_substr(a,12,2));
	printf("len is out of the string: %s\n",ft_substr(a,8,4));
	printf("both parameters are 0:%s\n",ft_substr(a,0,0));
	printf("length is neg: %s\n",ft_substr(a,0,-2));	
	printf("length is 0:%s\n",ft_substr(a,1,0));
return (0);
}
*/

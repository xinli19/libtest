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
	size_t		s_len;
	char		*substr;
	size_t 		index;
	
	s_len = ft_strlen((char *)s);
	if (!s)
		return (0);
	index = len + 1;
	if (s_len < start)
		len = 0;
	if (len > s_len && start < s_len)
		len = index - start - 1;
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, &s[start], len + 1);
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

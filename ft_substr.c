/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <xili@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:21:57 by xili              #+#    #+#             */
/*   Updated: 2023/09/20 11:33:14 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		s_len;
	char		*substr;

	s_len = ft_strlen((char *)s);
	if (!s)
		return (0);
	if (start == 0 && s_len < len)
		return (ft_strdup((char *)s));
	if (s_len < start)
		return (ft_strdup(""));
	if (len >= s_len && start < s_len)
		len = len - start;
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

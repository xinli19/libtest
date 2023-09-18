/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:14:22 by xili              #+#    #+#             */
/*   Updated: 2023/09/18 17:15:26 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	is_in_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		s1_index;
	char	*trimmed;

	i = 0;
	j = 0;
	if (!set)
		return ((char *)s1);
	s1_index = ft_strlen((char *)s1) - 1;
	trimmed = (char *) malloc (s1_index + 2);
	if (trimmed == NULL)
		return (NULL);
	while (is_in_set(s1[i], set) == 1)
		i++;
	if (i == s1_index)
		return (NULL);
	while (is_in_set(s1[s1_index], set) == 1)
		s1_index--;
	while (i <= s1_index)
		trimmed[j++] = s1[i++];
	trimmed[j] = '\0';
	return (trimmed);
}
/*
int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}
#include <stdio.h>
int	main()
{
	char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";

	printf("%s",ft_strtrim(s1," "));
}
*/

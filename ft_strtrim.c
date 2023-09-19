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
#include <stdio.h>

static int get_start(char *s1, char *set, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break;
		i++;
	}
	return (i);
}

static int get_end(char *s1, char *set, size_t len)
{
	size_t	i;

	i = 0;
	len = len - 1;
	while (len >= 0)
	{
		if (ft_strchr(set, s1[len]) == 0)
			break;
		len--;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*trimmed;
	int		len;
	int		size;
	len = ft_strlen(s1);
	i = get_start(s1, set,len);
	j = get_end(s1, set, len);
	size = j - i + 1;
	trimmed = (char *) malloc(size);
	ft_strlcpy(trimmed, &s1[i],size);
	return (trimmed);
}

#include <stdio.h>
int	main()
{
	char *s1 = "\t   \n\n\n  \n\n\t    Ges e d!\t\t\t\n  \t\t\t\t  ";

	printf("%s",ft_strtrim(s1,"\t \n"));
}

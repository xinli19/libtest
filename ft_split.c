/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:18:13 by xili              #+#    #+#             */
/*   Updated: 2023/09/19 11:33:00 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int count_outer(char const *s, char c)
{
    int count;
    int i;
    int flag;

    flag = 0;
    i = 0;
    count = 0;
    if (!*s)
        return (0);
    while (s[i])
    {
        if (s[i] == c)
            flag = 0;
        else if (s[i] != c && flag == 0)
        {
            count++;
            flag = 1;
        }
        i++;
    }
    return (count);
}

static char *set_arr(char *s, int start, int end)
{
    int i;
    char *arr;

    i = 0;
    arr = (char *)malloc((end - start + 1) * sizeof(char));
    while (start < end)
        arr[i++] = s[start++];
    arr[i] = '\0';
    return (arr);
}

char		**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**array;

	if (!s || !(array = malloc((count_outer((char *)s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= (size_t)ft_strlen((char *)s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == (size_t)ft_strlen((char *)s)) && index >= 0)
		{
			array[j++] = set_arr((char *)s, index, i);
			index = -1;
		}
		i++;
	}
	array[j] = 0;
	return (array);
}

/*
int main(void)
{
    int i = 0;
    char **arr;

    arr = ft_split("abbababbbb", 'a');
    if (arr == NULL)
        printf("the result is null");
    else
    {
        while (arr[i]) // Loop until the element is not NULL
        {
            printf("%s\n", arr[i]);
            i++;
        }
    }

    return 0;
}
*/
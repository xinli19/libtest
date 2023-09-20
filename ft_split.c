/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <xili@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:56:18 by xili              #+#    #+#             */
/*   Updated: 2023/09/20 12:04:41 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_outer(char const *s, char c)
{
	int	count;
	int	i;
	int	flag;

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

static char	*set_arr(char *s, int start, int end)
{
	int		i;
	char	*arr;

	i = 0;
	arr = (char *)malloc((end - start + 1) * sizeof(char));
	while (start < end)
		arr[i++] = s[start++];
	arr[i] = '\0';
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		ind;
	char	**array;

	array = malloc((count_outer((char *)s, c) + 1) * sizeof(char *));
	if (array == NULL || !s)
		return (0);
	i = 0;
	j = 0;
	ind = -1;
	while (i <= ft_strlen((char *)s))
	{
		if (s[i] != c && ind < 0)
			ind = i;
		else if ((s[i] == c || i == ft_strlen((char *)s)) && ind >= 0)
		{
			array[j++] = set_arr((char *)s, ind, i);
			ind = -1;
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

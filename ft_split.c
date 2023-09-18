/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:18:13 by xili              #+#    #+#             */
/*   Updated: 2023/09/18 17:27:38 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	count_outer(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	if (!*s)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] && i != 0)
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	if (s[i -1] != c)
		count++;
	return (count);
}

void	error_handle(char **arr, int outer_l)
{
	while (outer_l > 0)
	{
		free(arr[outer_l]);
		outer_l--;
	}
}

void	count_inner(char *s, char c, int outer_l, char **arr)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	j = 0;
	index = 0;
	while (index < outer_l)
	{
		if (s[i] == c && s[i])
			i++;
		while (s[i] != c)
		{
			i++;
			j++;
		}
		if (j != 0)
		{
			arr[index] = (char *)malloc(j + 1);
			if (arr[index] == NULL)
				error_handle(arr, outer_l);
			index++;
			j = 0;
		}
	}
}

void	set_arr(char *s, char c, char **arr, int max_length)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (j < max_length)
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c)
		{
			arr[j][k] = s[i];
			k++;
			i++;
		}
		k = 0;
		j++;
		i++;
	}
	arr[max_length] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		arr_len;
	char	**arr;

	arr_len = count_outer((char *)s, c);
	arr = (char **)malloc((arr_len + 1) * sizeof(char *));
	if (arr == NULL)
		error_handle(arr, arr_len + 1);
	count_inner((char *)s, c, arr_len, arr);
	set_arr((char *)s, c, arr, arr_len);
	return (arr);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i;
	i = 0;
	if (arr == NULL)
		printf("the result is null");
	else
	{
		while(i < 50)
	{
		printf("%s\n",arr[i]);
		i++;
	}
}
}
*/

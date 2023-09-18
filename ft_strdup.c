/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:19:36 by xili              #+#    #+#             */
/*   Updated: 2023/09/14 14:46:14 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*new;

	i = 0;
	new = (char *)malloc(ft_strlen((char *)s) + 1);
	if (new == NULL)
		return (NULL);
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
#include <string.h>
#include <stdio.h>

int main(int arn, char *arv[])
{
	printf("or func: %s\n",strdup(arv[1]));
	printf("my func: %s\n",ft_strdup(arv[1]));
}
*/

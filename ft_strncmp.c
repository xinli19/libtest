/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:18:38 by xili              #+#    #+#             */
/*   Updated: 2023/09/18 17:20:17 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if ((!s1 && !s2) || n == 0)
		return (0);
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			break ;
	}
	if (s1[i] == '\0' || s2[i] == '\0')
		return (s1[i] - s2[i]);
	else
		return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("%d\n",ft_strncmp("\200", "\0", 6));
	printf("%d",'\2'-'\0');
}
*/

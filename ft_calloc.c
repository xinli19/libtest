/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:15:56 by xili              #+#    #+#             */
/*   Updated: 2023/09/14 15:16:56 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ptr;

	i = 0;
	ptr = (void *)malloc(size * count);
	while (i < (size * count))
		((unsigned char *)ptr)[i++] = 0;
	return (ptr);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{

	char	*str_calloc = NULL;
	int		length = 0;
	int	bug = 0;
	int	j = 0;
	char	test1[5][10] = {"hello","1239asdf","     sf","dfdfsasdf","112++"};
	for (int i = 0;i < 5; i++) 
	{
		length = strlen(test1[i]) + 1;
		str_calloc = (char*)ft_calloc(length, sizeof(*str_calloc));
		for (j = 0; j < length; j++)
		{
			if (str_calloc[j++])
			{
				bug = 1;
				break ;
			}
		}
		if (bug == 1)
			printf("!!bug appears:%s,%d,%d\n",test1[i],j,length);
		else
			printf("test %d: all good :)\n",i);
		free(str_calloc);
		str_calloc = NULL;
	}
	printf("\n");


//	printf("%s",(char *)ft_calloc(2,3));
}*/

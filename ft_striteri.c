/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:37:24 by xili              #+#    #+#             */
/*   Updated: 2023/09/18 17:16:34 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*	
void	my_func(unsigned int a, char *str)
{
	printf("%c\n",*str);
		str[a] = 'a';
}

int	main(int arn, char *av[])
{
	(void)arn;
	ft_striteri(av[1],my_func);
	printf("%s",av[1]);

}
*/

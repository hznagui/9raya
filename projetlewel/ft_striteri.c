/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 01:36:57 by hznagui           #+#    #+#             */
/*   Updated: 2022/10/21 22:55:54 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	p;
	size_t	l;

	if (!s)
	{
		return ;
	}
	p = ft_strlen(s);
	l = 0;
	while (l < p)
	{
		f(l, s + l);
		l++;
	}
}

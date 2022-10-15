/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:28:02 by hznagui           #+#    #+#             */
/*   Updated: 2022/10/13 01:39:36 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t          i;
	unsigned char	*u;

	u = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (u[i] == c)
			return (u + i);
		i++;
	}
	return (0);
}

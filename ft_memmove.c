/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:48:44 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/24 22:42:20 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *d_st;
	const unsigned char *s_rc;

	if (dst > src)
	{
		d_cpy = (unsigned char *)dst;
		s_cpy = (const unsigned char *)src;
		i = 0;
		while (len > 0)
		{
			len--;
			d_cpy[len] = s_cpy[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
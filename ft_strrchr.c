/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:53:22 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/23 10:47:30 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	size_t	i;

	if (!str)
		return (NULL);
	i = ft_strlen(str);
	c = (unsigned char)c;
	while (i > 0)
	{
		i--;
		if (str[i] == c)
			return (&str[i]);
	}
	return (NULL);
}

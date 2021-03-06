/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgueifao <mgueifao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 01:21:59 by mgueifao          #+#    #+#             */
/*   Updated: 2021/12/29 19:12:46 by mgueifao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	t_uc		*d;
	const t_uc	*s;
	size_t		i;

	if (!n)
		return (NULL);
	d = (t_uc *)dest;
	s = (const t_uc *)src;
	i = -1;
	while (++i < n)
	{
		d[i] = s[i];
		if (s[i] == (t_uc)c)
			return (&(d[i + 1]));
	}
	return (NULL);
}

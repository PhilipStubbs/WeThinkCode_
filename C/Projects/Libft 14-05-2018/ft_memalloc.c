/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 07:41:11 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/17 07:41:13 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *p;

	if ((p = (void*)malloc(size)) == NULL)
	{
		return (NULL);
	}
	else
	{
		p = (void*)malloc(size);
		ft_memset(p, '\0', size);
		return (p);
	}
}

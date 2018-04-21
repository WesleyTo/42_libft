/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 21:54:57 by wto               #+#    #+#             */
/*   Updated: 2018/02/21 21:55:05 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’
** representing the integer n given as argument. Negative numbers must be
** supported. If the allocation fails, the function returns NULL
*/

char		*ft_itoa(int n)
{
	return (ft_itoa_base(n, 10));
}

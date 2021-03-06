/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 13:30:34 by wto               #+#    #+#             */
/*   Updated: 2018/02/19 14:08:29 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The isdigit() function tests for a decimal digit character.
*/

int	ft_isdigit(int n)
{
	return ((n <= '9') && (n >= '0'));
}

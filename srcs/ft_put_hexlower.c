/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexlower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susasaki <susasaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:50:21 by susasaki          #+#    #+#             */
/*   Updated: 2022/10/27 02:38:30 by susasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_put_hexlower(unsigned int n)
{
	size_t	count;
	char	*str;

	if (n == 0)
		return (ft_put_char('0'));
	str = ft_tolower_all(ft_point_base(n, 16));
	count = ft_put_string(str);
	free(str);
	return (count);
}

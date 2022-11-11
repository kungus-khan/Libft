/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:38:18 by aikram            #+#    #+#             */
/*   Updated: 2022/01/25 12:25:47 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	while ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= 48 && c <= 57))
		return (1);
	return (0);
}

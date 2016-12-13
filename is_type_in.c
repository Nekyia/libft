/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_type_in.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majullie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 10:49:57 by majullie          #+#    #+#             */
/*   Updated: 2016/12/13 10:52:06 by majullie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_is_char_in(char c, char *str)
{
	while (*str != '\0')
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

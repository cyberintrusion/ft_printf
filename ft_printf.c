/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyildiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:37:45 by alyildiz          #+#    #+#             */
/*   Updated: 2023/05/08 07:44:16 by alyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	arguments;
	size_t	i;
	size_t	len;
	int		count;

	count = 0;
	i = 0;
	len = ft_strlen((char *)str);
	va_start(arguments, str);
	while (i < len)
	{
		if (str[i] == '%' && check(str[i + 1]) == 1)
		{
			count += flags(str[i + 1], arguments);
			i += 2;
		}
		else if (str[i])
		{
			write(1, &str[i], 1);
			count++;
			i++;
		}
	}
	return (count);
}

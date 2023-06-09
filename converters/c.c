/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyildiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:34:57 by alyildiz          #+#    #+#             */
/*   Updated: 2023/05/07 22:46:31 by alyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_c(va_list arguments)
{
	char	c;

	c = (char)va_arg(arguments, int);
	return (write(1, &c, 1));
}

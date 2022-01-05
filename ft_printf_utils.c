/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <rteles@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:42:59 by rteles            #+#    #+#             */
/*   Updated: 2022/01/05 18:38:24 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_h"

int	ft_print_string(char *str)
{
	int	i;

	i = ft_strlen(str);
	write(1, &str, i);
	return (i);
}

int	ft_print_int(int n)
{
	int		i;
	char	*str;

	str = NULL;
	str = ft_itoa(n);
	i = ft_print_string(str);
	return (i);
}

int	ft_print_unsigned_decimal(unsigned int un)
{
	int		i;
	int		n;
	char	*str;

	n = un;
	i = ft_print_int(n);
	return (i);
}

int	ft_print_hexadecimal(unsigned int hx, int up)
{
	int	i;

	i = 0;
	return (i);
}

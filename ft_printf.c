/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <rteles@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:21:21 by rteles            #+#    #+#             */
/*   Updated: 2022/01/05 18:36:17 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_makestring(const char type, va_list args)
{
	int	print_len;

	print_len = 0;
	if (type == 'c')
		print_len = ft_print_char(va_arg(args, int));
	else if (type == 'p')
		print_len;
	else if (type == 's')
		print_len = ft_print_string(va_arg(args, char *));
	else if (type == 'd' || type == 'i')
		print_len = ft_print_int(va_arg(args, int));
	else if (type == 'u')
		print_len = ft_print_unsigned_decimal(va_arg(args, unsigned int));
	else if (type == 'x')
		print_len = ft_print_hexadecimal(va_arg(args, unsigned int), 0);
	else if (type == 'X')
		print_len = ft_print_hexadecimal(va_arg(args, unsigned int), 1);
	else if (type == '%')
		print_len = ft_print_char('%');
	return (print_len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		print_len;

	if (!str)
		return (NULL);
	va_start(args, str);
	print_len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_len += ft_makestring(str[i + 1], args);
			i++;
		}
		else
			print_len += ft_print_char(str[i]);
		i++;
	}
	va_end(args);
	return (print_len);
}

/*%c print a single character.
• %s print a string of characters.
• %p The void * pointer argument is printed in hexadecimal.
• %d print a decimal (base 10) number.
• %i print an integer in base 10.
• %u print an unsigned decimal (base 10) number.
• %x print a number in hexadecimal (base 16), with lowercase.
• %X print a number in hexadecimal (base 16), with uppercase.
• %% print a percent sign.*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf_s.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 09:10:31 by retanaka          #+#    #+#             */
/*   Updated: 2024/05/22 17:50:08 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_printf_s_compare(char *s)
{
	printf(" | return = %d\n", ft_printf("ft_printf : [%s]", s));
	printf(" | return = %d\n\n", printf("   printf : [%s]", s));
}

void	test_ft_printf_s(void)
{
	printf("\n-------- %%s test--------\n\n");
	printf("\"hello\" address\n");
	test_ft_printf_s_compare("hello");
	printf("\"\" address\n");
	test_ft_printf_s_compare("");
	printf("NULL address\n");
	test_ft_printf_s_compare(NULL);
}

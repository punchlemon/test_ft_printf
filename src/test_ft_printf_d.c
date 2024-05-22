/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf_d.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 09:10:31 by retanaka          #+#    #+#             */
/*   Updated: 2024/05/22 17:30:32 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_printf_d_compare(int d)
{
	printf(" | return = %d\n", ft_printf("ft_printf : [%d]", d));
	printf(" | return = %d\n\n", printf("   printf : [%d]", d));
}

void	test_ft_printf_d(void)
{
	printf("\n-------- %%d test--------\n\n");
	printf("0\n");
	test_ft_printf_d_compare(0);
	printf("42\n");
	test_ft_printf_d_compare(42);
	printf("-42\n");
	test_ft_printf_d_compare(-42);
	printf("INT_MAX - 1\n");
	test_ft_printf_d_compare(INT_MAX - 1);
	printf("INT_MAX\n");
	test_ft_printf_d_compare(INT_MAX);
	printf("INT_MIN + 1\n");
	test_ft_printf_d_compare(INT_MIN + 1);
	printf("INT_MIN\n");
	test_ft_printf_d_compare(INT_MIN);
}

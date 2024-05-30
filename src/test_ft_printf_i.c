/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf_i.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:32:10 by retanaka          #+#    #+#             */
/*   Updated: 2024/05/30 11:41:35 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_printf_i_compare(int i)
{
	printf(" | return = %d\n", ft_printf("ft_printf : [%i]", i));
	printf(" | return = %d\n\n", printf("   printf : [%i]", i));
}

void	test_ft_printf_i(void)
{
	printf("\n-------- %%i test--------\n\n");
	printf("0\n");
	test_ft_printf_i_compare(0);
	printf("42\n");
	test_ft_printf_i_compare(42);
	printf("-42\n");
	test_ft_printf_i_compare(-42);
	printf("INT_MAX - 1\n");
	test_ft_printf_i_compare(INT_MAX - 1);
	printf("INT_MAX\n");
	test_ft_printf_i_compare(INT_MAX);
	printf("INT_MIN + 1\n");
	test_ft_printf_i_compare(INT_MIN + 1);
	printf("INT_MIN\n");
	test_ft_printf_i_compare(INT_MIN);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf_u.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:32:10 by retanaka          #+#    #+#             */
/*   Updated: 2024/05/22 17:44:27 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_printf_u_compare(int u)
{
	printf(" | return = %d\n", ft_printf("ft_printf : [%u]", u));
	printf(" | return = %d\n\n", printf("   printf : [%u]", u));
}

void	test_ft_printf_u(void)
{
	printf("\n-------- %%u test--------\n\n");
	printf("0\n");
	test_ft_printf_u_compare(0);
	printf("42\n");
	test_ft_printf_u_compare(42);
	printf("-42\n");
	test_ft_printf_u_compare(-42);
	printf("INT_MAX - 1\n");
	test_ft_printf_u_compare(INT_MAX - 1);
	printf("INT_MAX\n");
	test_ft_printf_u_compare(INT_MAX);
	printf("INT_MIN + 1\n");
	test_ft_printf_u_compare(INT_MIN + 1);
	printf("INT_MIN\n");
	test_ft_printf_u_compare(INT_MIN);
}

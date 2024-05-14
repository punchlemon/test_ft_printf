/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf_d.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 09:10:31 by retanaka          #+#    #+#             */
/*   Updated: 2024/05/14 14:18:27 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_printf_d_1(void)
{
	int	d;
	int	res1;
	int	res2;

	printf("\n-------- %%d test--------\n\n");
	d = 0;
	printf("0\n");
	res1 = ft_printf("ft_printf : [%d]", d);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%d]", d);
	printf(" %d\n\n", res2);
	d = 42;
	printf("42\n");
	res1 = ft_printf("ft_printf : [%d]", d);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%d]", d);
	printf(" %d\n\n", res2);
	d = -42;
	printf("-42\n");
	res1 = ft_printf("ft_printf : [%d]", d);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%d]", d);
	printf(" %d\n\n", res2);
}

void	test_ft_printf_d_2(void)
{
	int	d;
	int	res1;
	int	res2;

	d = INT_MAX - 1;
	printf("INT_MAX - 1\n");
	res1 = ft_printf("ft_printf : [%d]", d);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%d]", d);
	printf(" %d\n\n", res2);
	d = INT_MAX;
	printf("INT_MAX\n");
	res1 = ft_printf("ft_printf : [%d]", d);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%d]", d);
	printf(" %d\n\n", res2);
}

void	test_ft_printf_d_3(void)
{
	int	d;
	int	res1;
	int	res2;

	d = INT_MIN + 1;
	printf("INT_MIN + 1\n");
	res1 = ft_printf("ft_printf : [%d]", d);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%d]", d);
	printf(" %d\n\n", res2);
	d = INT_MIN;
	printf("INT_MIN\n");
	res1 = ft_printf("ft_printf : [%d]", d);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%d]", d);
	printf(" %d\n\n", res2);
}

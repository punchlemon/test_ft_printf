/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf_x_upper.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:32:10 by retanaka          #+#    #+#             */
/*   Updated: 2024/05/14 14:22:22 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_printf_x_upper_1(void)
{
	int	x_upper;
	int	res1;
	int	res2;

	printf("\n-------- %%X test--------\n\n");
	x_upper = 0;
	printf("0\n");
	res1 = ft_printf("ft_printf : [%X]", x_upper);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%X]", x_upper);
	printf(" %d\n\n", res2);
	x_upper = 42;
	printf("42\n");
	res1 = ft_printf("ft_printf : [%X]", x_upper);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%X]", x_upper);
	printf(" %d\n\n", res2);
	x_upper = -42;
	printf("-42\n");
	res1 = ft_printf("ft_printf : [%X]", x_upper);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%X]", x_upper);
	printf(" %d\n\n", res2);
}

void	test_ft_printf_x_upper_2(void)
{
	int	x_upper;
	int	res1;
	int	res2;

	x_upper = INT_MAX - 1;
	printf("INT_MAX - 1\n");
	res1 = ft_printf("ft_printf : [%X]", x_upper);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%X]", x_upper);
	printf(" %d\n\n", res2);
	x_upper = INT_MAX;
	printf("INT_MAX\n");
	res1 = ft_printf("ft_printf : [%X]", x_upper);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%X]", x_upper);
	printf(" %d\n\n", res2);
}

void	test_ft_printf_x_upper_3(void)
{
	int	x_upper;
	int	res1;
	int	res2;

	x_upper = INT_MIN + 1;
	printf("INT_MIN + 1\n");
	res1 = ft_printf("ft_printf : [%X]", x_upper);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%X]", x_upper);
	printf(" %d\n\n", res2);
	x_upper = INT_MIN;
	printf("INT_MIN\n");
	res1 = ft_printf("ft_printf : [%X]", x_upper);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%X]", x_upper);
	printf(" %d\n\n", res2);
}

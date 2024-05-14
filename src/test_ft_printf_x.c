/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:32:10 by retanaka          #+#    #+#             */
/*   Updated: 2024/05/14 14:18:45 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_printf_x_1(void)
{
	int	x;
	int	res1;
	int	res2;

	printf("\n-------- %%x test--------\n\n");
	x = 0;
	printf("0\n");
	res1 = ft_printf("ft_printf : [%x]", x);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%x]", x);
	printf(" %d\n\n", res2);
	x = 42;
	printf("42\n");
	res1 = ft_printf("ft_printf : [%x]", x);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%x]", x);
	printf(" %d\n\n", res2);
	x = -42;
	printf("-42\n");
	res1 = ft_printf("ft_printf : [%x]", x);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%x]", x);
	printf(" %d\n\n", res2);
}

void	test_ft_printf_x_2(void)
{
	int	x;
	int	res1;
	int	res2;

	x = INT_MAX - 1;
	printf("INT_MAX - 1\n");
	res1 = ft_printf("ft_printf : [%x]", x);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%x]", x);
	printf(" %d\n\n", res2);
	x = INT_MAX;
	printf("INT_MAX\n");
	res1 = ft_printf("ft_printf : [%x]", x);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%x]", x);
	printf(" %d\n\n", res2);
}

void	test_ft_printf_x_3(void)
{
	int	x;
	int	res1;
	int	res2;

	x = INT_MIN + 1;
	printf("INT_MIN + 1\n");
	res1 = ft_printf("ft_printf : [%x]", x);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%x]", x);
	printf(" %d\n\n", res2);
	x = INT_MIN;
	printf("INT_MIN\n");
	res1 = ft_printf("ft_printf : [%x]", x);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%x]", x);
	printf(" %d\n\n", res2);
}

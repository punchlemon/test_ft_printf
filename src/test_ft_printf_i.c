/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf_i.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:32:10 by retanaka          #+#    #+#             */
/*   Updated: 2024/05/14 14:18:15 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_printf_i_1(void)
{
	int	i;
	int	res1;
	int	res2;

	printf("\n-------- %%i test--------\n\n");
	i = 0;
	printf("0\n");
	res1 = ft_printf("ft_printf : [%i]", i);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%i]", i);
	printf(" %d\n\n", res2);
	i = 42;
	printf("42\n");
	res1 = ft_printf("ft_printf : [%i]", i);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%i]", i);
	printf(" %d\n\n", res2);
	i = -42;
	printf("-42\n");
	res1 = ft_printf("ft_printf : [%i]", i);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%i]", i);
	printf(" %d\n\n", res2);
}

void	test_ft_printf_i_2(void)
{
	int	i;
	int	res1;
	int	res2;

	i = INT_MAX - 1;
	printf("INT_MAX - 1\n");
	res1 = ft_printf("ft_printf : [%i]", i);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%i]", i);
	printf(" %d\n\n", res2);
	i = INT_MAX;
	printf("INT_MAX\n");
	res1 = ft_printf("ft_printf : [%i]", i);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%i]", i);
	printf(" %d\n\n", res2);
}

void	test_ft_printf_i_3(void)
{
	int	i;
	int	res1;
	int	res2;

	i = INT_MIN + 1;
	printf("INT_MIN + 1\n");
	res1 = ft_printf("ft_printf : [%i]", i);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%i]", i);
	printf(" %d\n\n", res2);
	i = INT_MIN;
	printf("INT_MIN\n");
	res1 = ft_printf("ft_printf : [%i]", i);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%i]", i);
	printf(" %d\n\n", res2);
}

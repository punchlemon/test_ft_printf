/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf_u.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:32:10 by retanaka          #+#    #+#             */
/*   Updated: 2024/05/14 13:57:56 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_printf_u_1(void)
{
	int	u;
	int	res1;
	int	res2;

	printf("\n-------- %%u test--------\n\n");
	u = 0;
	printf("0\n");
	res1 = ft_printf("ft_printf : [%u]", u);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%u]", u);
	printf(" %d\n\n", res2);
	u = 42;
	printf("42\n");
	res1 = ft_printf("ft_printf : [%u]", u);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%u]", u);
	printf(" %d\n\n", res2);
	u = -42;
	printf("-42\n");
	res1 = ft_printf("ft_printf : [%u]", u);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%u]", u);
	printf(" %d\n\n", res2);
}

void	test_ft_printf_u_2(void)
{
	int	u;
	int	res1;
	int	res2;

	u = INT_MAX - 1;
	printf("INT_MAX - 1\n");
	res1 = ft_printf("ft_printf : [%u]", u);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%u]", u);
	printf(" %d\n\n", res2);
	u = INT_MAX;
	printf("INT_MAX\n");
	res1 = ft_printf("ft_printf : [%u]", u);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%u]", u);
	printf(" %d\n\n", res2);
}

void	test_ft_printf_u_3(void)
{
	int	u;
	int	res1;
	int	res2;

	u = INT_MIN + 1;
	printf("INT_MIN + 1\n");
	res1 = ft_printf("ft_printf : [%u]", u);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%u]", u);
	printf(" %d\n\n", res2);
	u = INT_MIN;
	printf("INT_MIN\n");
	res1 = ft_printf("ft_printf : [%u]", u);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%u]", u);
	printf(" %d\n\n", res2);
}

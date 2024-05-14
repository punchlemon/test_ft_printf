/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf_p.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 09:10:31 by retanaka          #+#    #+#             */
/*   Updated: 2024/05/14 14:18:10 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_printf_p_1(void)
{
	void	*p;
	int		res1;
	int		res2;

	printf("\n-------- %%p test--------\n\n");
	p = "hello";
	printf("\"hello\" address\n");
	res1 = ft_printf("ft_printf : [%p]", p);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%p]", p);
	printf(" %d\n\n", res2);
	p = "";
	printf("\"\" address\n");
	res1 = ft_printf("ft_printf : [%p]", p);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%p]", p);
	printf(" %d\n\n", res2);
	p = NULL;
	printf("NULL address\n");
	res1 = ft_printf("ft_printf : [%p]", p);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%p]", p);
	printf(" %d\n\n", res2);
}

void	test_ft_printf_p_2(void)
{
	void	*p;
	int		res1;
	int		res2;

	p = (void *)0x10ff0a;
	printf("0x10ff0a\n");
	res1 = ft_printf("ft_printf : [%p]", p);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%p]", p);
	printf(" %d\n\n", res2);
}

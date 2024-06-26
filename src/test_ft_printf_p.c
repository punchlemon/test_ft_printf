/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf_p.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 09:10:31 by retanaka          #+#    #+#             */
/*   Updated: 2024/05/22 17:50:35 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_printf_p_compare(void *p)
{
	printf(" | return = %d\n", ft_printf("ft_printf : [%p]", p));
	printf(" | return = %d\n\n", printf("   printf : [%p]", p));
}

void	test_ft_printf_p(void)
{
	printf("\n-------- %%p test--------\n\n");
	printf("\"hello\" address\n");
	test_ft_printf_p_compare("hello");
	printf("\"\" address\n");
	test_ft_printf_p_compare("");
	printf("NULL address\n");
	test_ft_printf_p_compare(NULL);
	printf("0x10ff0a\n");
	test_ft_printf_p_compare((void *)0x10ff0a);
}

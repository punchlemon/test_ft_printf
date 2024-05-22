/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf_c.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 09:10:31 by retanaka          #+#    #+#             */
/*   Updated: 2024/05/22 17:28:59 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_printf_c_compare(char c)
{
	printf(" | return = %d\n", ft_printf("ft_printf : [%c]", c));
	printf(" | return = %d\n\n", printf("   printf : [%c]", c));
}

void	test_ft_printf_c(void)
{
	printf("\n-------- %%c test--------\n\n");
	printf("a\n");
	test_ft_printf_c_compare('a');
	printf("\\0\n");
	test_ft_printf_c_compare('\0');
}

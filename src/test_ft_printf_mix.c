/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf_mix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 09:10:31 by retanaka          #+#    #+#             */
/*   Updated: 2024/05/22 17:59:23 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_printf_mix(void)
{
	printf("\n-------- mix test--------\n\n");
	printf(" | return = %d\n", ft_printf("ft_printf : [%c%s%p%d%d%i%u%x%X]", 42, "42", NULL, 42, 42, 42, 42, 42, 42));
	printf(" | return = %d\n\n", printf("   printf : [%c%s%p%d%d%i%u%x%X]", 42, "42", NULL, 42, 42, 42, 42, 42, 42));
	printf(" | return = %d\n", ft_printf("ft_printf : [%d%d%d]", INT_MAX, INT_MIN, 0));
	printf(" | return = %d\n\n", printf("   printf : [%d%d%d]", INT_MAX, INT_MIN, 0));
}

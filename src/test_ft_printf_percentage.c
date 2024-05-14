/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf_percentage.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:32:10 by retanaka          #+#    #+#             */
/*   Updated: 2024/05/14 14:22:47 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_printf_percentage(void)
{
	int	res1;
	int	res2;

	printf("\n-------- %%%% test--------\n\n");
	res1 = ft_printf("ft_printf : [%%]");
	printf(" %d\n", res1);
	res2 = printf("   printf : [%%]");
	printf(" %d\n\n", res2);
}

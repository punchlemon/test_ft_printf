/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf_c.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 09:10:31 by retanaka          #+#    #+#             */
/*   Updated: 2024/05/14 14:17:50 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_printf_c(void)
{
	char	c;
	int		res1;
	int		res2;

	printf("\n-------- %%c test--------\n\n");
	c = 'a';
	printf("a\n");
	res1 = ft_printf("ft_printf : [%c]", c);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%c]", c);
	printf(" %d\n\n", res2);
	c = '\0';
	printf("\\0\n");
	res1 = ft_printf("ft_printf : [%c]", c);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%c]", c);
	printf(" %d\n\n", res2);
}

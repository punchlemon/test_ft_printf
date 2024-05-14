/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf_s.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 09:10:31 by retanaka          #+#    #+#             */
/*   Updated: 2024/05/14 14:18:02 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_printf_s(void)
{
	char	*s;
	int		res1;
	int		res2;

	printf("\n-------- %%s test--------\n\n");
	s = "hello";
	printf("hello\n");
	res1 = ft_printf("ft_printf : [%s]", s);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%s]", s);
	printf(" %d\n\n", res2);
	s = "";
	printf("\"\"\n");
	res1 = ft_printf("ft_printf : [%s]", s);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%s]", s);
	printf(" %d\n\n", res2);
	s = NULL;
	printf("NULL\n");
	res1 = ft_printf("ft_printf : [%s]", s);
	printf(" %d\n", res1);
	res2 = printf("   printf : [%s]", s);
	printf(" %d\n\n", res2);
}

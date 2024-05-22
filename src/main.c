/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 09:02:45 by retanaka          #+#    #+#             */
/*   Updated: 2024/05/22 17:53:41 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	test_ft_printf_c();
	test_ft_printf_s();
	test_ft_printf_p();
	test_ft_printf_d();
	test_ft_printf_i();
	test_ft_printf_u();
	test_ft_printf_x();
	test_ft_printf_x_upper();
	test_ft_printf_percentage();
	test_ft_printf_mix();
	return (0);
}

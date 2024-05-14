/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 10:16:28 by retanaka          #+#    #+#             */
/*   Updated: 2024/05/14 14:17:22 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H

# define TEST_H
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
void	test_ft_printf_c(void);
void	test_ft_printf_s(void);
void	test_ft_printf_p_1(void);
void	test_ft_printf_p_2(void);
void	test_ft_printf_d_1(void);
void	test_ft_printf_d_2(void);
void	test_ft_printf_d_3(void);
void	test_ft_printf_i_1(void);
void	test_ft_printf_i_2(void);
void	test_ft_printf_i_3(void);
void	test_ft_printf_u_1(void);
void	test_ft_printf_u_2(void);
void	test_ft_printf_u_3(void);
void	test_ft_printf_x_1(void);
void	test_ft_printf_x_2(void);
void	test_ft_printf_x_3(void);
void	test_ft_printf_x_upper_1(void);
void	test_ft_printf_x_upper_2(void);
void	test_ft_printf_x_upper_3(void);
void	test_ft_printf_percentage(void);

#endif

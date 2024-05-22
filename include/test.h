/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 10:16:28 by retanaka          #+#    #+#             */
/*   Updated: 2024/05/22 17:54:34 by retanaka         ###   ########.fr       */
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
void	test_ft_printf_p(void);
void	test_ft_printf_d(void);
void	test_ft_printf_i(void);
void	test_ft_printf_u(void);
void	test_ft_printf_x(void);
void	test_ft_printf_x_upper(void);
void	test_ft_printf_percentage(void);
void	test_ft_printf_mix(void);

#endif

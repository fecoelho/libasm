/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <fcoelho@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 22:35:32 by fcoelho           #+#    #+#             */
/*   Updated: 2020/11/29 22:35:34 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_main.h"
#include "libasm.h"

static void	test(char *str)
{
	printf("string    = \"%s\"\n\n", str);
	printf("strlen    = %lu\n", strlen(str));
	printf("ft_strlen = %lu\n", ft_strlen(str));
	printf("----------------------------\n");
}

void		test_ft_strlen(void)
{
	printf("\n\n\e[1;1m~~~~~~  FT_STRLEN  ~~~~~~\e[0m\n\n");
	test("Hello World");
	test("");
	test("a very very very very very very very very very very long string");
}

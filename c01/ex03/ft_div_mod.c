/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:18:02 by ralonso-          #+#    #+#             */
/*   Updated: 2022/11/09 13:31:34 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*x;
	int	*y;

	a = 8;
	b = 2;
	x = &div;
	y= &mod;
	
	ft_div_mod(a, b, x, y);
	printf("%d \n", div);
	printf("%d", mod);
	return(0);
}*/
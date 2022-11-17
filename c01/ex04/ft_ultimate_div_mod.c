/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:33:07 by ralonso-          #+#    #+#             */
/*   Updated: 2022/11/09 14:34:08 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;

	if (b != 0)
	{
		temp1 = *a / *b;
		temp2 = *a % *b;
		*a = temp1;
		*b = temp2;
	}
}

/*int main(void)
{
	int *a;
	int *b;
	int num1;
	int num2;

	num1 = 5;
	num2 = 4;
	a = &num1;
	b = &num2;
	ft_ultimate_div_mod(a, b);
	printf("el resultado es \n%d \n", num1);
	printf("el resto es \n%d", num2);
}*/
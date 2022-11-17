/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 01:09:15 by ralonso-          #+#    #+#             */
/*   Updated: 2022/11/17 06:36:23 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		r = nb * ft_recursive_factorial(nb - 1);
	}
	return(r);
}

/*int main(void)
{
	printf("%d", ft_recursive_factorial(0));
}*/
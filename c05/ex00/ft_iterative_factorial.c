/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:53:22 by ralonso-          #+#    #+#             */
/*   Updated: 2022/11/17 23:58:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	r;

	r = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		r *= nb;
		nb--;
	}
	return(r);
}

/*int main(void)
{
	printf("%d", ft_iterative_factorial(100));
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:21:39 by marvin            #+#    #+#             */
/*   Updated: 2022/11/17 21:21:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int res;

	res = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}

/*int main(void)
{
	printf("%d", ft_iterative_power(5, 2));
}*/
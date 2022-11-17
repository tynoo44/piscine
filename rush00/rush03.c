/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergonza <gergonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:55:57 by gergonza          #+#    #+#             */
/*   Updated: 2022/11/06 23:06:22 by gergonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c);

void	rush(int x, int y)
{
	int	py;
	int	px;

	py = 0;
	while (++py <= y && (x > 0 && y > 0))
	{
		px = 0;
		while (++px <= x)
		{
			if (py == 1 || py == y)
			{
				if (px == 1)
					ft_putchar('A');
				else if (px == x)
					ft_putchar('C');
				else
					ft_putchar('B');
			}
			else if (px == 1 || px == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

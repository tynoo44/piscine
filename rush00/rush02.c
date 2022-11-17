/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeltran <bbeltran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:50:41 by ralonso-          #+#    #+#             */
/*   Updated: 2022/11/06 23:06:15 by gergonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			if (px == 1 || px == x)
			{
				if (py == 1)
					ft_putchar('A');
				else if (py == y)
					ft_putchar('C');
				else
					ft_putchar('B');
			}
			else if (py == 1 || py == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

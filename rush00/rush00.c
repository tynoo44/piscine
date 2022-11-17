/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeltran <bbeltran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 19:02:46 by bbeltran          #+#    #+#             */
/*   Updated: 2022/11/06 23:01:43 by gergonza         ###   ########.fr       */
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
					ft_putchar('o');
				else if (py == y)
					ft_putchar('o');
				else
					ft_putchar('|');
			}
			else if (py == 1 || py == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeltran <bbeltran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:50:41 by ralonso-          #+#    #+#             */
/*   Updated: 2022/11/06 23:05:05 by gergonza         ###   ########.fr       */
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
				if ((py == 1 && px == 1) || (py == y && px == x))
					ft_putchar('/');
				else if ((py == 1 && px == x) || (py == y && px == 1))
					ft_putchar('\\');
				else
					ft_putchar('*');
			}
			else if (py == 1 || py == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

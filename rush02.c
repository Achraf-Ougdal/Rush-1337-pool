/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 16:41:05 by moharras          #+#    #+#             */
/*   Updated: 2019/02/17 17:43:22 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_b(int x, int y, int i, int j)
{
	if ((i > 1 && i < x) && (j == 1 || j == y))
		ft_putchar('B');
	if ((j > 1 && j < y) && (i == 1 || i == x))
		ft_putchar('B');
}

int		rush(int x, int y)
{
	int		i;
	int		j;

	j = 1;
	if (x <= 0 || y <= 0)
		return (0);
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((i == 1 && j == 1) || (i == x && j == 1))
				ft_putchar('A');
			if ((i == 1 && j == y && j != 1) ||
					(i == x && j == y && i != 1 && j != 1))
				ft_putchar('C');
			ft_print_b(x, y, i, j);
			if ((j > 1 && j < y) && (i > 1 && i < x))
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	return (0);
}

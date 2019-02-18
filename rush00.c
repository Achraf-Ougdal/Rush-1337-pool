/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 17:40:15 by moharras          #+#    #+#             */
/*   Updated: 2019/02/17 17:40:37 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_chars(int i, int j, int x, int y)
{
	if ((i == 1 && (j == 1 || j == y)) || (i == x && (j == 1 || j == y)))
		ft_putchar('o');
	if ((i > 1 && i < x) && (j == 1 || j == y))
		ft_putchar('-');
	if ((j > 1 && j < y) && (i == 1 || i == x))
		ft_putchar('|');
	if ((i > 1 && i < x) && (j > 1 && j < y))
		ft_putchar(' ');
}

int		rush(int x, int y)
{
	int i;
	int j;

	j = 1;
	if (x <= 0 || y <= 0)
		return (0);
	else
	{
		while (j <= y)
		{
			i = 1;
			while (i <= x)
			{
				ft_print_chars(i, j, x, y);
				i++;
			}
			ft_putchar('\n');
			j++;
		}
		return (0);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 08:02:33 by goka-rop          #+#    #+#             */
/*   Updated: 2019/10/09 15:11:09 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		last;
	int		j;
	int		smallest;
	int		position;

	i = 0;
	last = size - 1;
	while (i <= last)
	{
		j = i;
		smallest = tab[i];
		while (j <= last)
		{
			if (tab[j] <= smallest)
			{
				smallest = tab[j];
				position = j;
			}
			j++;
		}
		ft_swap(&tab[i], &tab[position]);
		i++;
	}
}

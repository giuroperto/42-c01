/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 23:10:11 by goka-rop          #+#    #+#             */
/*   Updated: 2019/10/11 15:55:41 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int		*ptr1;
	int		*ptr2;

	ptr1 = &(tab[0]);
	ptr2 = &(tab[size - 1]);
	while (ptr1 < ptr2)
	{
		ft_swap(ptr1, ptr2);
		ptr1++;
		ptr2--;
	}
}

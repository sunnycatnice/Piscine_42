/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:33:01 by dmangola          #+#    #+#             */
/*   Updated: 2020/10/29 19:41:07 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i0;
	int i1;
	int a;

	i0 = 0;
	while (i0 < size)
	{
		i1 = i0 + 1;
		while (i1 < size)
		{
			if (tab[i0] > tab[i1])
			{
				a = tab[i0];
				tab[i0] = tab[i1];
				tab[i1] = a;
			}
			i1++;
		}
		i0++;
	}
}

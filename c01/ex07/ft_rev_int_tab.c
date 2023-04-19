/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:37:44 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/18 01:24:36 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{	
	int	index;
	int	when;
	int	tmp;

	when = size;
	size = size - 1;
	index = 0;
	while (index != (when / 2))
	{
		tmp = tab[index];
		tab[index] = tab[size];
		tab[size] = tmp;
		++index;
		--size;
	}
}

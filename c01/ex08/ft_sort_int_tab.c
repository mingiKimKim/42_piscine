/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 01:24:07 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/18 02:18:52 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	tmp;
	int	current_pos;

	index = 0;
	while (index != size)
	{	
		current_pos = index + 1;
		if (tab[index] > tab[current_pos])
		{	
			tmp = tab[index];
			tab[index] = tab[current_pos];
			tab[current_pos] = tmp;
			index = 0;
			continue ;
		}
		++index;
	}
}

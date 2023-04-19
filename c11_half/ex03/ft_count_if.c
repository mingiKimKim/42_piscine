/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 02:30:53 by minjiki2          #+#    #+#             */
/*   Updated: 2023/02/02 05:31:22 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{	
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{	
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

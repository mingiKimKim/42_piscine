/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:42:04 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/26 13:10:44 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{	
	int	result;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{	
		result = nb;
		while (power > 1)
		{	
			result = result * nb;
			power--;
		}
	}
	return (result);
}

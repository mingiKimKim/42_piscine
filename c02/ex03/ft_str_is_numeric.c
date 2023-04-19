/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:35:32 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/18 20:33:30 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{	
	int	index;
	int	result;

	index = 0;
	result = 1;
	while (*(str + index))
	{	
		if ((*(str + index) >= '0') && (*(str + index) <= '9'))
			result = 1;
		else
		{
			result = 0;
			return (result);
		}	
		++index;
	}
	return (result);
}

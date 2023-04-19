/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:57:13 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/19 20:20:26 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{	
	int	index;
	int	result;

	index = 0;
	result = 1;
	while (*(str + index))
	{	
		if ((*(str + index) >= 'a') && (*(str + index) <= 'z'))
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

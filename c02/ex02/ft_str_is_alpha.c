/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:35:55 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/21 18:45:17 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{	
	int		index;
	int		result;
	char	c;

	index = 0;
	result = 1;
	while (str[index])
	{	
		c = *(str + index);
		if ((c < 65) || (c > 90 && c < 97) || (c > 122))
		{
			result = 0;
		}
		++index;
	}
	return (result);
}

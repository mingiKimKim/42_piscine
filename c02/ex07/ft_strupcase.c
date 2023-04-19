/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:25:13 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/19 19:54:22 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{	
	int	index;

	index = 0;
	while (*(str + index))
	{	
		if ((*(str + index) >= 'a') && (*(str + index) <= 'z'))
		{
			*(str + index) = *(str + index) - 32;
		}
		++index;
	}
	return (str);
}

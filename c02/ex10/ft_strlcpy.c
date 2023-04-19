/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 09:49:39 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/23 19:19:31 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{	
	unsigned int	index;
	int				result;

	index = 0;
	result = 0;
	while (src[result])
		result++;
	while (src[index] && index + 1 < size)
	{	
		dest[index] = src[index];
		++index;
	}
	dest[index] = '\0';
	return (result);
}

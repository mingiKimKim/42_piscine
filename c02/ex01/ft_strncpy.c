/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:43:47 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/21 18:10:21 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{	
	unsigned int	index;

	index = 0;
	while ((index < n) && (src[index]))
	{
		dest[index] = src[index];
		++index;
	}
	while (index < n)
	{	
		dest[index] = '\0';
		++index;
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 07:29:03 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/26 15:42:19 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_string_len(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{	
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	count;
	unsigned int	dest_len_copy;

	dest_len = ft_string_len(dest);
	dest_len_copy = dest_len;
	src_len = ft_string_len(src);
	i = 0;
	count = 0;
	if (dest_len >= size)
		return (src_len + size);
	else
	{
		while ((dest_len + 1 < size) && src[count])
		{	
			dest[dest_len] = src[count];
			++dest_len;
			++count;
		}
		dest[dest_len] = '\0';
		return (dest_len_copy + src_len);
	}
}

int	ft_string_len(char *str)
{	
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

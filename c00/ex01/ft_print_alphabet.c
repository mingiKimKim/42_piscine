/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:42:00 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/17 19:37:20 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{	
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
	return ;
}

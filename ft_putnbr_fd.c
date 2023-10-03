/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melfersi <melfersi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:29:46 by melfersi          #+#    #+#             */
/*   Updated: 2023/10/03 15:29:46 by melfersi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	long	div;

	if (!n)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	num = n;
	div = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num *= (-1);
	}
	while (num / div != 0)
		div *= 10;
	div /= 10;
	while (div)
	{
		ft_putchar_fd((num / div) + '0', fd);
		num %= div;
		div /= 10;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 02:55:43 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/03/24 02:51:16 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	low;
	long int	mid;
	long int	high;

	low = 1;
	high = nb;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (mid * mid < nb)
			low = mid + 1;
		else if (mid * mid > nb)
			high = mid - 1;
		else
			return (mid);
	}
	return (0);
}

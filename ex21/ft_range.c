/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 00:07:28 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/03/29 04:07:31 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	index;
	int	*result_range;

	if (min >= max)
		return (0);
	range = max - min;
	index = 0;
	result_range = (int *)malloc(sizeof(int) * range);
	if (!result_range)
		return (0);
	while (index < range)
	{
		result_range[index] = min + index;
		index++;
	}
	return (result_range);
}

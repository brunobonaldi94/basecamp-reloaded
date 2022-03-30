/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 02:08:58 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/03/26 20:56:02 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	char_number;

	char_number = '0';
	while (char_number <= '9')
	{
		ft_putchar(char_number);
		char_number++;
	}
}

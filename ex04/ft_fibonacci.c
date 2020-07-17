/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semabote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:55:02 by semabote          #+#    #+#             */
/*   Updated: 2020/07/17 11:55:21 by semabote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index <=1)
	{
		return index;
	}
	else
	{
		return ft_fibonacci(index-1) + ft_fibonacci(index -2);
	}

}

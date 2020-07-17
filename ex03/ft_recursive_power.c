/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semabote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:51:40 by semabote          #+#    #+#             */
/*   Updated: 2020/07/17 11:52:43 by semabote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	int i = 0;
	if ((power < i) || (power = 0))
	{
		i = 1; 
		while (power >= i)
		{
			nb = nb * i;
			i++;
		
				return(nb * ft_recursive_power(nb, power -1);
		}
		else
		{
			return 0;
		}
	}

}

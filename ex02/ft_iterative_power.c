/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semabote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:48:59 by semabote          #+#    #+#             */
/*   Updated: 2020/07/17 11:49:06 by semabote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	int i = 0;
	if (nb < i)
	{
		return 1;
	}
	else if( i <nb)
	{
		while (i<= nb)
		{	
			nb = nb * i;
		}
		i++;
		return nb;
	}
	else
	{
		return 0;
	}
}


int main()
{
	int nb;
	ft_recursive_factorial(nb);

}

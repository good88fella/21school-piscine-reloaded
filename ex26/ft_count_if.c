/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktimika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 19:06:56 by ktimika           #+#    #+#             */
/*   Updated: 2019/09/03 19:50:45 by ktimika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int cnt;
	int i;

	cnt = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			cnt++;
		i++;
	}
	return (cnt);
}

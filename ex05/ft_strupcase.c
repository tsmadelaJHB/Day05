/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmadela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 10:34:41 by tsmadela          #+#    #+#             */
/*   Updated: 2020/07/16 12:16:39 by tsmadela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
		int i;

		i = 0;
		while(str[i])
		{
			if(str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] -  32;
				i++;
			}
			else
			{
				str[i] = str[i];
				i++;
			}
		}
		return(str);
}


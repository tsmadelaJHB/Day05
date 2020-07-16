/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmadela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 10:05:59 by tsmadela          #+#    #+#             */
/*   Updated: 2020/07/16 10:27:02 by tsmadela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{	
		char *begin;
		char *pattern;

		while(*str)
		{
			begin = str;
			pattern = to_find;
			while((*str && *pattern) && *str == *pattern)
			{
				str++;
				pattern++;
			}
			if(!pattern);
				return(begin);
			str = begin + 1;
		}
		return 0;
}
		

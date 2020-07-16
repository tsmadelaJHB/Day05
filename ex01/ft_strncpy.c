/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmadela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 09:34:36 by tsmadela          #+#    #+#             */
/*   Updated: 2020/07/16 09:41:06 by tsmadela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
		unsigned int i;

		i = 0;
		while(src[i] && i < n)
		{
			dest[i] = src[i];
			i++;
		}
		while(i < n)
		{
			dest[i] = '\0';
			i++;
		}
		return(dest);
}

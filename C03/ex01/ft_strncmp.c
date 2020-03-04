/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrasooli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 17:42:15 by nrasooli          #+#    #+#             */
/*   Updated: 2019/07/11 18:09:11 by nrasooli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2 unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] || s2[i] && (i < n))
	{
	if (s1[i] < s2[i])
	return (-1);
	if (s1[i] > s2[i])
	return (1);
	i++;
	}
	return (0);
}

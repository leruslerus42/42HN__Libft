/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:40:05 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/09/24 13:32:29 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_isalnum(int c)
{
	if (((c >= '\101') && (c <= '\132')) || ((c >= '\141') && (c <= '\172')))
		return (1);
	else if ((c >= '\060') && (c <= '\071'))
		return (1);
	return (0);
}
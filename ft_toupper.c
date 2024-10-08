/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomarna <thomarna@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:18:08 by thomarna          #+#    #+#             */
/*   Updated: 2024/10/08 10:28:21 by thomarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_toupper(int c)
{
	if ( c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

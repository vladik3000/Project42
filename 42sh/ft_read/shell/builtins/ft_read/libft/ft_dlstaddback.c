/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstaddback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshivhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 10:11:57 by ttshivhu          #+#    #+#             */
/*   Updated: 2017/09/07 10:12:11 by ttshivhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstaddback(t_dlist **head, t_dlist *new)
{
	t_dlist	*ptr;

	if (!new || !head)
		return ;
	while (*head && (*head)->next)
		head = &(*head)->next;
	ptr = *head;
	if (*head)
		(*head)->next = new;
	else
		*head = new;
	new->prev = ptr;
}

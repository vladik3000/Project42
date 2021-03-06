/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_32_or_64.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 12:01:40 by angonyam          #+#    #+#             */
/*   Updated: 2018/07/16 12:01:42 by angonyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "otool.h"

int			is_64_or_32(struct mach_header *head)
{
	if (head->magic == MH_MAGIC_64)
		return (1);
	else
		return (-1);
}

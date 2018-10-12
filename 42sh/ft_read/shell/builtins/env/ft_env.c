/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:31:30 by angonyam          #+#    #+#             */
/*   Updated: 2017/11/17 15:32:44 by angonyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../shell.h"

void		ft_env(char **envp)
{
	int		i;

	i = -1;
	while (envp[++i])
		ft_printf("%s\n", envp[i]);
}
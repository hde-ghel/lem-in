/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:01:39 by hde-ghel          #+#    #+#             */
/*   Updated: 2020/03/08 18:35:54 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lem_in.h"

int		main(void)
{
	t_lemin		*env;

	if (!(env->input = read_input()))
		return (error("malloc error")); //Fonction error free
	if ((parse_input(env)))
		return (-1);
	ft_putstr(env->input);
	printf("\nnb_ants = %d\n", env->nb_ants);

	return (0);
}

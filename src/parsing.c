/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 14:54:59 by hde-ghel          #+#    #+#             */
/*   Updated: 2020/03/08 18:35:52 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lem_in.h"

//Pas sur de recup les comment
void		get_comment(char *str)
{
	ft_printf("%s\n", str);
}
/*
void		parse_links(t_lemin *env)
{
	int		ret;
	char	*line;

	ret = 0;
	line = NULL;

	while ((ret = get_next_line(env->fd, &line)) > 0)
	{
		if (line[0] == '#' && ft_strlen(line) > 1 && line[1] != '#')
			get_comment(line);
		else if (line[0] == '#' && ft_strlen(line) > 1 && line[1] == '#')
			get_command(env, line);
		else if (isroom(line))
			new_room(env, line);
		else
			break;
		ft_strdel(&line);
	}
	ft_strdel(&line);
	if (ret == -1)
		error_msg("ERROR: file error");
}
*/
void	parse_input(t_lemin *env)
{
	if (isatty(env->fd))
		error_msg(env, "No map file specified");
	parse_ants(env);
	printf("nb ants = %d\n", env->nb_ants);
	parse_rooms(env);
	//parse_links();
}

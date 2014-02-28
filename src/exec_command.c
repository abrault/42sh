/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/28 16:34:57 by abrault           #+#    #+#             */
/*   Updated: 2014/02/28 18:04:52 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <ft.h>

static char		*get_path(char **env)
{
	if (ft_strnstr(env[0], "PATH", 4))
		return (env[0]);
	return (NULL);
}

static char		*right_command(char *path, char *cmd)
{
	char	*tok;

	tok = NULL;
	(void)path;
	(void)cmd;
	return (tok);
}

int				exec_command(char **env, char *cmd)
{
	char	*path;

	if (special_command(cmd))
		return (1);
	if ((path = get_path(env)) != NULL)
	{
		if (right_command(path, cmd))
		{
			return (1);
		}
		else
			ft_putendl("Command not found ...");
	}
	else
		ft_putendl("Error : Invalide env !");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:11:36 by abrault           #+#    #+#             */
/*   Updated: 2014/02/28 18:05:16 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <ft.h>
#include <stdio.h>
#include <libft.h>

int		main(void)
{
	char		*line;
	extern char	**environ;
	char		*tok;

	line = NULL;
	tok = NULL;
	(void)environ;
	while (42)
	{
		display_prompt();
		line = get_command();
		tok = ft_strtok(line, ';');
		while (tok)
		{
			exec_command(environ, tok);
			tok = ft_strtok(NULL, ';');
		}
		free(line);
	}
	return (0);
}

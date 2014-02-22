/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:11:36 by abrault           #+#    #+#             */
/*   Updated: 2014/02/22 18:31:48 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <ft.h>
#include <stdio.h>

int		main(void)
{
	char	*line;
	char	**environ;

	line = NULL;
	(void)environ;
	while (42)
	{
		display_prompt();
		line = get_command();
		
		free(line);
	}
	return (0);
}

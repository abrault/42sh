/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_command.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/28 18:00:52 by abrault           #+#    #+#             */
/*   Updated: 2014/02/28 18:04:40 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

int		special_command(char *cmd)
{
	if (ft_strstr(cmd, "exit"))
		exit(0);
	return (1);
}

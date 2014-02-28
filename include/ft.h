/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:23:57 by abrault           #+#    #+#             */
/*   Updated: 2014/02/28 17:58:31 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int		display_prompt(void);
int		check_command(char *line);
char	*get_command(void);
int		exec_command(char **env, char *str);
int		special_command(char *cmd);

#endif

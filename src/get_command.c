/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:35:37 by abrault           #+#    #+#             */
/*   Updated: 2014/02/22 18:18:17 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ft.h>
#include <libft.h>

static char	*add_str(char *str, char *line)
{
	char	*new_str;
	int		size;
	int		i;
	int		j;

	i = 0;
	j = 0;
	size = ft_strlen(line) + ft_strlen(str) + 1;
	new_str = malloc(sizeof(size));

	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;

	}
	while (line != NULL && str[j] != '\0')
	{
		new_str[i + j] = str[j];
		j++;
	}
	if (line != NULL)
		free(line);
	return (new_str);
}

char		*get_command(void)
{
	char	buff[BUFF_SIZE + 1];
	char	*line;
	int		ret;
	char	*ptr;

	line = NULL;
	ptr = NULL;
	while ((ret = read(0, buff, BUFF_SIZE)))
	{
		buff[ret] = '\0';
		line = add_str(buff, line);
		if ((ptr = ft_strchr(line, '\n')))
		{
			*ptr = '\0';
			return (line);
		}
	}
	return (NULL);
}

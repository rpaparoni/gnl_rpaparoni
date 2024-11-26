/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:14:09 by rpaparon          #+#    #+#             */
/*   Updated: 2024/11/21 15:01:29 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{

}

static char *set_line(char *stored)
{
	int i;
	char *line;

	i = 0;
	while (stored[i] != '\n' && stored[i] != '\0')
		i++;	
	*line = malloc (i + 2);
	if (!line)
		return (NULL);
	line[i + 1] = '\0';
	return (line);
}
static char *fill_line()
{
	
}
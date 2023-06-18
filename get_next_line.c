/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:42:49 by yaidriss          #+#    #+#             */
/*   Updated: 2023/06/18 17:42:47 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char   *get_next_line(int fd)
{
    int i = 0;
    int j = -1;
    int rd;
    char *line;
    static  char *str;
    str = malloc(99999);

    rd = read(fd, str, BUFFER_SIZE - BUFFER_SIZE + 1);
    if (rd <= 0)
    {
        free(str);
        return NULL;
    }
    while (rd && str[i - 1] != '\n')
    {
        i += rd;
        if (str[0] == '\n')
            break;
        rd = read(fd, str + i, BUFFER_SIZE - BUFFER_SIZE + 1);
        if (str[i] == '\n')
            i++;
    }
    line = ft_calloc(i + 1, 1);
    while(++j < i && str[j])
       line[j] = str[j];
    line[j] = 0;
    free(str);
    str = 0;
    return (line);  
}
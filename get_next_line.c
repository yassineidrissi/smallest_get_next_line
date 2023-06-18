/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:42:49 by yaidriss          #+#    #+#             */
/*   Updated: 2023/06/18 18:34:04 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char   *get_next_line(int fd)
{
    int i = 0;
    int j = -1;
    int rd;
    char *line;
    static  char str[99999] = {0};

    rd = read(fd, str, 1);
    if (rd <= 0 || BUFFER_SIZE < 1)
        return 0;
    while (rd && str[i - 1] != '\n')
    {
        i += rd;
        if (str[0] == '\n')
            break;
        rd = read(fd, str + i, 1);
        if (str[i] == '\n')
            i++;
    }
    line = ft_calloc(i + 1, 1);
    //! in the exam u can samply change it by malloc 
    //!ther is no need to add get_next_line_utils file
    while(++j < i && str[j])
       line[j] = str[j];
    line[j] = 0;
    return (line);  
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:52:47 by yaidriss          #+#    #+#             */
/*   Updated: 2023/06/18 17:25:43 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_calloc(size_t count, size_t size)
{
    char *result;
    result = malloc(count*size);
    if (result == NULL)
        return NULL;    
    while(count--)
        result[count] = 0;
    return result;
}
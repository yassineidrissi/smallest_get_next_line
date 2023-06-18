/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:44:57 by yaidriss          #+#    #+#             */
/*   Updated: 2023/06/18 16:44:46 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
    int i = 0;
    int fd = open("/Users/yaidriss/Desktop/get_next_line/gnlTester/files/41_with_nl", O_RDONLY);
    while(++i < 6)
        printf("(%d)-->line is :%s",i, get_next_line(fd));
    close(fd);
    return 0;
}
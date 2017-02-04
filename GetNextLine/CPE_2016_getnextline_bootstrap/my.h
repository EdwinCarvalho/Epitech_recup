/*
** my.h for my.h in /home/edwin/Epitech/GetNextLine/CPE_2016_getnextline_bootstrap
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Tue Jan  3 10:42:08 2017 edwin
** Last update Wed Jan  4 09:12:21 2017 edwin
*/

#ifndef MY_H_
# define MY_H_
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

void	my_putchar(char c);
int	read_and_display_read_line_1(int fd);
int	read_and_display_read_line_x(int fd, int x);
char	read_next_char(int fd);
char	*read_next_ten_bytes(int fd);
char	*read_next_x_bytes(int fd, int n);

#endif /* !MY_H_ */

OB/*
** main.c for main.c in /home/edwin/Epitech/GetNextLine/CPE_2016_getnextline_bootstrap
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Tue Jan  3 10:38:00 2017 edwin
** Last update Wed Jan  4 11:23:52 2017 edwin
*/
#include "my.h"

int	open_file(char *pathname)
{
  int	fd;

  fd = open(pathname, O_RDONLY);
  if (fd == -1)
    return (84);
  return (fd);
}

int	main(int argc, char *argv[])
{
  int	fd;

  if (argc == 2)
    {
      fd = open_file(argv[1]);
      read_and_display_read_line_x(fd, 4);
      close(fd);
    }
  else
    return (84);
  return (0);
}

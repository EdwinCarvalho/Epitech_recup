/*
** algorithms.c for algorithms.c in /home/edwin.carvalho/C Prog Elem/CPE_2016_BSQ
** 
** Made by Edwin ROCHA CARVALHO
** Login   <edwin.carvalho@epitech.net>
** 
** Started on  Thu Dec 15 13:35:09 2016 Edwin ROCHA CARVALHO
** Last update Sun Dec 18 23:38:57 2016 Edwin ROCHA CARVALHO
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "my.h"

int	open_file(char *filepath)
{
  int	fd;

  fd = open(filepath, O_RDONLY);
  if (fd == -1)
    return (1);
  return (fd);
}

int	cat_bytes(char *filepath)
{
  int	fd;
  char	buffer[30000];

  fd = open_file(filepath);
  read(fd, buffer, 30000);
  my_putstr(buffer);
  close(fd);
  return (0);
}

int	main(int argc, char *argv[])
{
  int	fd;

  fd = open_file(argv[1]);
  if (fd == -1)
    return (84);
  if (argc == 2)
    cat_bytes("text.txt");
  close(fd);
  return (0);
}

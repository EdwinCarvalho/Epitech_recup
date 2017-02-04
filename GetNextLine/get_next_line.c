/*
** get_next_line.c for get_next_line.c in /home/edwin/Epitech/GetNextLine/CPE_2016_getnextline
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Fri Jan 13 09:54:51 2017 edwin
** Last update Fri Jan 13 10:06:54 2017 edwin
*/
#include "get_next_line.h"

char	*my_realloc(char *prev, int size_array)
{
  int	i;
  char	*str;

  i = 0;
  str = malloc(sizeof(str) * size_array);
  if (str == NULL)
    return (NULL);
  while (prev[i] != '\0')
    {
      str[i] = prev[i];
      i = i + 1;
    }
  free(prev);
  return (str);
}

int	cpy_to_string(char *rest, char *buffer, int i)
{
  int	swap;
  int	j;

  j = 0;
  swap = i;
  while (buffer[swap] != '\0')
    {
      rest[j] = buffer[swap];
      swap = swap + 1;
      j = j + 1;
    }
  rest[j] = '\0';
  return (1);
}

int	cpy_check(char *rest, char *string_to_return)
{
  int	i;
  int	sub_compt;

  i = 0;
  sub_compt = 0;
  while (rest[i] != '\n')
    i = i + 1;
  while (rest[i] != '\0')
    {
      string_to_return[sub_compt] = rest[i];
      sub_compt = sub_compt + 1;
      i = i + 1;
    }
  return (sub_compt);
}

int	read_my_lines()
{
  int	ret;
  
  ret = read(fd, buffer, READ_SIZE);
  if (ret == -1 || ret == 0 || buffer[0] == '\0')
    return (NULL);
  size_array = size_array + READ_SIZE;
  string_to_return = my_realloc(size_array, string_to_return);
  while (buffer[i] != '\n' && i < READ_SIZE)
    {
      string_to_return[compt] = buffer[i];
      i = i + 1;
      compt = compt + 1;
    }
  if (buffer[i] == '\n')
    {
      i = 0;
      while (buffer[i] != '\0')
	{
	  check_static = cpy_to_string(rest, buffer, i);
	  i = i + 1;
	}
      check_line = 1;
    }
}

char	*get_next_line(const int fd)
{
  int	ret;
  int	size_array;
  int	compt;

  i = 0;
  check_line = 0;
  compt = 0;
  size_array = READ_SIZE;
  rest = malloc(sizeof(char) * (READ_SIZE + 1));
  string_to_return = malloc(sizeof(char) * (READ_SIZE + 1));
  buffer = malloc(sizeof(char) * (READ_SIZE + 1));
  if (rest == NULL || string_to_return == NULL
      || buffer == NULL || READ_SIZE <= 0)
    return (NULL);
  if (check_static == 1)
    compt = cpy_check(rest, string_to_return);
  while (check_line != 1)
    {
      ret = read(fd, buffer, READ_SIZE);
      if (ret == -1 || ret == 0 || buffer[0] == '\0')
	return (NULL);
      size_array = size_array + READ_SIZE;
      string_to_return = my_realloc(size_array, string_to_return);
      while (buffer[i] != '\n' && i < READ_SIZE)
	{
	  string_to_return[compt] = buffer[i];
	  i = i + 1;
	  compt = compt + 1;
	}
      if (buffer[i] == '\n')
	{
	  i = 0;
	  while (buffer[i] != '\0')
	    {
	      check_static = cpy_to_string(rest, buffer, i);
	      i = i + 1;
	    }
	  check_line = 1;
	}
    }
  free(buffer);
  return (string_to_return);
}

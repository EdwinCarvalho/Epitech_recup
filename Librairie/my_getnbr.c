/*
** my_getnbr.c for my_getnbr.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Mon Jan 23 11:51:35 2017 edwin
** Last update Thu Jan 26 09:07:18 2017 edwin
*/
#include "library.h"

void	init_var(int check_sign, int ret, int i)
{
  check_sign = 1;
  i = 0;
  ret = 0;
}

int	my_getnbr(char *str)
{
  int	check_sign;
  int	ret;
  int	i;

  init_var(check_sign, ret, i);
  while (str[i] == '+' || str[i] == '-')
    {
      if (str[i] == '-')
	check_sign = -1;
      i = i + 1;
    }
  while ((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9'))
    {
      if (ret == 214748364 && str[i] > 8 && check_sign == -1)
	return (0);
      if (ret == 214748364 && str[i] > 7 && check_sign == 1)
	return (0);
      if (ret > 214748364)
	return (0);
      ret = (ret * 10) + (str[i] - 48);
      i = i + 1;
    }
  if (check_sign == -1)
    ret = - ret;
  return (ret);
}

/*
** my_putchar.c for my_putchar.c in /home/edwin/Librairie
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Mon Jan 23 11:34:25 2017 edwin
** Last update Mon Jan 23 11:35:04 2017 edwin
*/
#include "library.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

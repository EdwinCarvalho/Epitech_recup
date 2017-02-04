/*
** process_info.c for process_info.c in /home/edwin/Epitech/Navy/PSU_2016_navy_bootstrap/srcs
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Mon Jan 30 09:14:15 2017 edwin
** Last update Mon Jan 30 09:46:14 2017 edwin
*/
#include "../includes/library.h"
#include <unistd.h>
#include <stdio.h>

void	process_info()
{
  printf("PID : %d\n"
	    "PPID : %d\n"
	    "PGID : %d\n", (int) getpid(), (int) getppid(), (int) getgid());
}

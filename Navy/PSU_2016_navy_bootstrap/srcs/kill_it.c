/*
** kill_it.c for kill_it.c in /home/edwin/Epitech/Navy/PSU_2016_navy_bootstrap/srcs
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Mon Jan 30 09:31:26 2017 edwin
** Last update Tue Jan 31 16:48:28 2017 edwin
*/
#include "../includes/library.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

int	kill_it(int argc, char **argv)
{
  pid_t	pid;

  if (argc != 2)
    write(2, "Entre un PID a kill !", 21);
  else
    {
      pid = atoi(argv[1]);
      if (kill(pid, SIGQUIT) == -1)
	return (84);
    }
}

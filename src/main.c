/*
** main.c for mainc in /home/peau_c/rendu/CPE/Allum1
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Sat Feb  6 17:17:30 2016 Clement Peau
** Last update Thu Feb 18 10:30:34 2016 Clement Peau
*/

#include "allum1.h"

int		main(int ac, char **av)
{
  t_allum	allum;

  ac = ac;
  srand(time(0));
  if (av[1] != NULL)
    {
      allum.line = atoi(av[1]);
      if (allum.line <= 0)
	allum.line = 4;
    }
  else
    allum.line = 4;
  create_array(&allum);
  main_calc(&allum);
  return (0);
}

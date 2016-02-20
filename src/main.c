/*
** main.c for mainc in /home/peau_c/rendu/CPE/Allum1
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Sat Feb  6 17:17:30 2016 Clement Peau
** Last update Fri Feb 19 20:00:37 2016 Clement Peau
*/

#include "allum1.h"

int		main(int ac, char **av)
{
  t_allum	allum;

  ac = ac;
  srand(time(0));
  if (av[1] != NULL)
    {
      allum.line = getnbr(av[1]);
      if (allum.line <= 0)
	allum.line = 4;
    }
  else
    allum.line = 4;
  if (av[2] != NULL)
    {
      if (av[2][0] == '1')
	allum.mode = 1;
      else
	allum.mode = 2;
    }
  create_array(&allum);
  main_calc(&allum);
  return (0);
}

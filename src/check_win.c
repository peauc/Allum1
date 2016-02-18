/*
** check_win.c for chcek wim in /home/peau_c/rendu/CPE/CPE_2015_Allum1
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Wed Feb 10 15:49:17 2016 Clement Peau
** Last update Wed Feb 10 16:11:50 2016 Clement Peau
*/

#include "allum1.h"

int	check_win(t_allum *allum, int mode)
{
  int	i;
  int	finnit;

  i = -1;
  finnit = 1;
  while (allum->tab[++i] != -1)
    {
      if (allum->tab[i] != 0)
	finnit = 0;
    }
  if (finnit == 1 && mode == 0)
    {
      MY_PUTSTR("You lost, too bad..\n");
      return (1);
    }
  else if (finnit == 1 && mode == 1)
    {
      MY_PUTSTR("I lost.. snif.. but I’ll get you next time!!\n");
      return (1);
    }
  return (0);
}

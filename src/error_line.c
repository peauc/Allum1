/*
** error_line.c for error in line in /home/peau_c/rendu/CPE/CPE_2015_Allum1
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Feb  8 18:47:20 2016 Clement Peau
** Last update Tue Feb  9 16:37:04 2016 Clement Peau
*/

#include "allum1.h"

int	check_error_line(t_allum *allum, char *str)
{
  int	i;

  i = -1;
  if (allum->tab[atoi(str) - 1] == 0)
    {
      MY_PUTSTR("Error: Line is empty\n");
      main_calc(allum);
      return (1);
    }
  while (str[++i] != '\n' && str[i] != 0)
    {
      if ((str[i] > '9' || str[i] < '0') && str[i] != 0)
	{
	  MY_PUTSTR("Error: Only numbers\n");
	  main_calc(allum);
	  return (1);
	}
    }
  if (atoi(str) - 1 > allum->line)
    {
    	  MY_PUTSTR("Error: this line is out of range\n");
	  main_calc(allum);
	  return (1);
    }
  return (0);
}

int	check_error_matches(t_allum *allum, char *str, int nb)
{
  int	i;

  i = -1;
  printf("ligne = %d,matches = %d nombres de matches = [%d]%d\n", nb, atoi(str), nb, allum->tab[nb]);
  while (str[++i] != '\n' && str[i] != 0)
    {
      if ((str[i] > '9' || str[i] < '0') && str[i] != 0)
	{
	  MY_PUTSTR("Error: Only numbers\n");
	  main_calc(allum);
	  return (1);
	}
    }
  if (atoi(str) > allum->tab[nb])
    {
    	  MY_PUTSTR("Error: not enought match(es) on this line\n");
	  main_calc(allum);
	  return (1);
    }
  return (0);
}

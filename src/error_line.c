/*
** error_line.c for error in line in /home/peau_c/rendu/CPE/CPE_2015_Allum1
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Feb  8 18:47:20 2016 Clement Peau
** Last update Mon Feb 22 15:12:44 2016 Clement Peau
*/

#include "allum1.h"

int	check_error_line(t_allum *allum, char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\n' && str[i] != 0)
    {
      if ((str[i] > '9' || str[i] < '0' || getnbr(str) == 0) && str[i] != 0)
	{
	  MY_PUTSTR("Error: invalid input (positive number expected)");
	  main_calc(allum);
	  return (1);
	}
    }
  if (getnbr(str) - 1 > allum->line || getnbr(str) - 1 < 0)
    {
    	  MY_PUTSTR("Error: this line is out of range");
	  main_calc(allum);
	  return (1);
    }
  if (allum->tab[getnbr(str) - 1] == 0)
    {
      MY_PUTSTR("Error: Line is empty");
      main_calc(allum);
      return (1);
    }
  return (0);
}

int	check_error_matches(t_allum *allum, char *str, int nb)
{
int	i;

  i = -1;
  while (str[++i] != '\n' && str[i] != 0)
    if ((str[i] > '9' || str[i] < '0' || getnbr(str) == 0) && str[i] != 0)
      {
	MY_PUTSTR("Error: invalid input (positive number expected)");
	main_calc(allum);
	return (1);
      }
  if (getnbr(str) - 1 < 0)
    {
      MY_PUTSTR("Error: invalid input (positive number expected)");
      main_calc(allum);
      return (1);
    }
  if (getnbr(str) > allum->tab[nb])
    {
      MY_PUTSTR("Error: not enought matches on this line");
      main_calc(allum);
      return (1);
    }
  return (0);
}

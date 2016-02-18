/*
** calc.c for maincalc in /home/peau_c/rendu/CPE/CPE_2015_Allum1
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Feb  8 15:44:51 2016 Clement Peau
** Last update Wed Feb 10 16:09:10 2016 Clement Peau
*/

#include "allum1.h"

int		main_calc(t_allum *allum)
{
  int		game;
  char		*lines;
  char		*matches;

  lines = malloc(4096 * sizeof(char));
  matches = malloc(4096 * sizeof(char));
  game = 0;
  while (game == 0)
    {
      MY_PUTSTR("Your turn:\nLine: ");
      read(0, lines, 4096);
      if ((check_error_line(allum, lines)) == 1)
	break;
      MY_PUTSTR("Matches: ");
      read(0, matches, 4096);
      if ((check_error_matches(allum, matches, atoi(lines) - 1)) == 1)
	break;
      remove_matches(allum, atoi(matches), atoi(lines) - 1);
      if ((check_win(allum, 0)) == 1)
	break;
      ia(allum);
      if ((check_win(allum, 1)) == 1)
	break;
      showallum(allum);
    }
  free(matches);
  free(lines);
  return (0);
}

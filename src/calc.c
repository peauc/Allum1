/*
** calc.c for maincalc in /home/peau_c/rendu/CPE/CPE_2015_Allum1
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Feb  8 15:44:51 2016 Clement Peau
** Last update Sat Feb 20 12:41:31 2016 Clement Peau
*/

#include "allum1.h"

void		player_removed(int matches, int lines)
{
  MY_PUTSTR("Player removed ");
  putnbr(matches);
  MY_PUTSTR("match(es) from line ");
  putnbr(lines);
  MY_PUTSTR("\n");
}

int	calc_continued(t_allum *allum, char *matches, char *lines)
{
  if ((check_error_matches(allum, matches, getnbr(lines) - 1)) == 1)
    return (1);
  remove_matches(allum, getnbr(matches), getnbr(lines) - 1);
  player_removed(getnbr(lines), getnbr(matches));
  if ((check_win(allum, 0)) == 1)
    return (1);
  chose_dif(allum);
  return (0);
}

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
      MY_PUTSTR("\nYour turn:\nLine: ");
      read(0, lines, 4096);
      if ((check_error_line(allum, lines)) == 1)
	break;
      MY_PUTSTR("Matches: ");
      read(0, matches, 4096);
      if (calc_continued(allum, matches, lines) == 1)
	break;
      if ((check_win(allum, 1)) == 1)
	break;
      showallum(allum);
    }
  free(matches);
  free(lines);
  return (0);
}

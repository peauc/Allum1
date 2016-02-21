/*
** calc.c for maincalc in /home/peau_c/rendu/CPE/CPE_2015_Allum1
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Mon Feb  8 15:44:51 2016 Clement Peau
** Last update Sun Feb 21 23:29:41 2016 Clement Peau
*/

#include "allum1.h"

void		player_removed(int matches, int lines)
{
  MY_PUTSTR("Player removed ");
  putnbr(matches);
  MY_PUTSTR(" match(es) from line ");
  putnbr(lines);
  MY_PUTSTR("\n");
}

int	calc_continued(t_allum *allum, char *matches, char *lines)
{
  if (allum->turn == 0)
    {
      MY_PUTSTR("\nYour turn:");
      allum->turn++;
    }
  MY_PUTSTR("\nLine: ");
  if ((lines = get_next_line(0)) == NULL)
    return (1);
  if ((check_error_line(allum, lines)) == 1)
    return (1);
  MY_PUTSTR("Matches: ");
  if ((matches = get_next_line(0)) == NULL)
    return (1);
  if ((check_error_matches(allum, matches, getnbr(lines) - 1)) == 1)
    return (1);
  remove_matches(allum, getnbr(matches), getnbr(lines) - 1);
  player_removed(getnbr(lines), getnbr(matches));
  if ((check_win(allum, 0)) == 1)
    return (1);
  chose_dif(allum);
  if ((check_win(allum, 1)) == 1)
    return (1);
  showallum(allum);
  allum->turn = 0;
  return (0);
}

char		*read_it(char *str)
{
  int           i;
  int           readed;

  if ((readed = read(0, str, 4096) ) == 0)
      return (NULL);
  i = -1;
  while (str[++i] != 0 && str[i] != 10)
    {
      if (str[i] == 10)
	str[i] = 0;
      if (str[i] == '\t')
	str[i] = ' ';
    }
  if (str[0] == 0)
    return (NULL);
  return (str);
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
      if (calc_continued(allum, matches, lines) == 1)
	break;
    }
  free(matches);
  free(lines);
  return (0);
}

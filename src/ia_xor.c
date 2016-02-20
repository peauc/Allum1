/*
** ia_xor.c for xor in /home/peau_c/rendu/CPE/CPE_2015_Allum1
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Thu Feb 18 12:31:08 2016 Clement Peau
** Last update Sat Feb 20 12:29:33 2016 Clement Peau
*/

#include "allum1.h"

void	ia_xor(t_allum *allum)
{
  int	sum;
  int	i;

  i = 0;
  sum = 0;
  while (allum->tab[i] != -1)
      sum = sum ^ allum->tab[i++];
  i = 0;
  if (sum == 0)
    {
      ia_rdm(allum);
      return ;
    }
  while (allum->tab[i] != -1)
    {
      if ((allum->tab[i] ^ sum) < allum->tab[i])
	{
	  is_a_single_line(allum, allum->tab[i] - (allum->tab[i] ^ sum), i);
	  break;

	}
      i++;
    }
}

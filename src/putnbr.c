/*
** putnbr.c for my_putnbr in /home/peau_c/rendu/CPE/CPE_2015_Allum1
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Wed Feb 10 15:10:30 2016 Clement Peau
** Last update Wed Feb 10 15:29:57 2016 Clement Peau
*/

#include "allum1.h"

void	putnbr(int nb)
{
  int	c;

  if (nb > 0)
    {
      putnbr(nb / 10);
      c = nb % 10 + 48;
      write(1, &c, 1);
    }
}

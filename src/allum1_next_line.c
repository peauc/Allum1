/*
**
**
** Made by Clement Peau
** Login   <peau_c@epitech.net>
**
** Started on  Sun Feb 21 17:54:26 2016 Clement Peau
** Last update Sun Feb 21 23:00:55 2016 Clement Peau
*/

#include "allum1.h"

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  j = -1;
  i = 0;
  while (dest[++j] != 0);
  while (src[i] != 0)
    dest[j++] = src[i++];
  dest[j] = 0;
  return (0);
}

int	check_newline(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (0);
  while (str[i])
    {
      if (str[i] == '\n')
	return (1);
      i++;
    }
  return (0);
}

char	*isolate_newline(char *buffer)
{
  char	*line;
  int	i;

  i = 0;
  if ((line = malloc((my_strlen(buffer) + 1) * sizeof(char))) == NULL)
    return (NULL);
  while (buffer[i] != 0 && buffer[i] != '\n')
    {
      line[i] = buffer[i];
      i++;
    }
  line[i] = 0;
  return (line);
}

char	*get_next_line(const int fd)
{
  static char	*buffer = NULL;
  char		tmp[4096];
  char		*line;
  int		readed;

  readed = 0;
  tmp[0] = 0;
  while ((check_newline(buffer)) != 1)
    {
      if (buffer == NULL)
	buffer = malloc(4096 * sizeof(char));
      if ((readed = read(fd, tmp, 4096)) < 1)
	return (NULL);
      tmp[readed] = 0;
      my_strcat(buffer, tmp);
    }
  if ((line = isolate_newline(buffer)) == NULL)
    return (NULL);
  buffer = &buffer[my_strlen(line)];
  return (line);
}

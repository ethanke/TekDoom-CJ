/*
** load_snoop.c for loadsnoop in /mnt/hgfs/Shared/TekDoom/sousa_v_wolf
**
** Made by Kerdelhue Ethan
** Login   <kerdel_e@epitech.net>
**
** Started on  Tue Jan 19 04:28:52 2016 Kerdelhue Ethan
** Last update Mon Jan 25 15:26:11 2016 victor sousa
*/

#include	"my.h"

int		snoop_id(char status, int _id)
{
  static int	dir = 0;
  static int	id = 0;

  if (status)
    {
      if (dir == 0)
	id += (_id - id);
      else
	id -= (_id - id);
    }
  if (id > 17)
    {
      dir = 1;
      id = 16;
    }
  if (id < 0)
    {
      dir = 0;
      id = 1;
    }
  return (id);
}

int		load_snoop_texture2(t_prog *prog)
{
  if ((prog->sprites.snoop[9] =
       load_bitmap("sprites/snoopdog/snoop10.png")) == NULL
      || (prog->sprites.snoop[10] =
	  load_bitmap("sprites/snoopdog/snoop11.png")) == NULL
      || (prog->sprites.snoop[11] =
	  load_bitmap("sprites/snoopdog/snoop12.png")) == NULL
      || (prog->sprites.snoop[12] =
	  load_bitmap("sprites/snoopdog/snoop13.png")) == NULL
      || (prog->sprites.snoop[13] =
	  load_bitmap("sprites/snoopdog/snoop14.png")) == NULL
      || (prog->sprites.snoop[14] =
	  load_bitmap("sprites/snoopdog/snoop15.png")) == NULL
      || (prog->sprites.snoop[15] =
	  load_bitmap("sprites/snoopdog/snoop16.png")) == NULL
      || (prog->sprites.snoop[16] =
	  load_bitmap("sprites/snoopdog/snoop17.png")) == NULL
      || (prog->sprites.snoop[17] =
	  load_bitmap("sprites/snoopdog/snoop17.png")) == NULL)
    return (-1);
  return (0);
}
int		load_snoop_texture(t_prog *prog)
{
  if ((prog->sprites.snoop[0] =
       load_bitmap("sprites/snoopdog/snoop2.png")) == NULL
      || (prog->sprites.snoop[1] =
	  load_bitmap("sprites/snoopdog/snoop2.png")) == NULL
      || (prog->sprites.snoop[2] =
	  load_bitmap("sprites/snoopdog/snoop3.png")) == NULL
      || (prog->sprites.snoop[3] =
	  load_bitmap("sprites/snoopdog/snoop4.png")) == NULL
      || (prog->sprites.snoop[4] =
	  load_bitmap("sprites/snoopdog/snoop5.png")) == NULL
      || (prog->sprites.snoop[5] =
	  load_bitmap("sprites/snoopdog/snoop6.png")) == NULL
      || (prog->sprites.snoop[6] =
	  load_bitmap("sprites/snoopdog/snoop7.png")) == NULL
      || (prog->sprites.snoop[7] =
	  load_bitmap("sprites/snoopdog/snoop8.png")) == NULL
      || (prog->sprites.snoop[8] =
	  load_bitmap("sprites/snoopdog/snoop9.png")) == NULL
      || load_snoop_texture2(prog) == -1)
    return (-1);
  return (0);
}

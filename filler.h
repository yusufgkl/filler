#ifndef _FILLER_H
# define _FILLER_H
# include "libft/libft.h"

# define SETCOLORS 0

# define END	"\033[0m"
# define BOLD	"\033[1m"
# define ITALIC	"\033[3m"
# define BLACK	"\033[30m"
# define RED	"\033[31m"
# define GREEN	"\033[32m"
# define YELLOW	"\033[33m"
# define BLUE	"\033[34m"
# define CYAN	"\033[36m"
# define WHITE	"\033[37m"

typedef struct	s_filler
{
char			player_id;
char			enemy_id;
int				map_id;
int				pls;
int				mapy;
int				mapx;
char			**map;
int				x_piece;
int				y_piece;
char			**piece;
int				m_posx;
int				m_posy;
int				o_posx;
int				o_posy;
int				pushx;
int				pushy;
int				algo;
}				t_filler;

char			**ft_double_strnew(size_t x, size_t y);
int				get_map(t_filler *pgm);
int				algo(t_filler *pgm);
void			get_pos(t_filler *pgm);
int				get_piece(t_filler *pgm, char *line);
int				try_piece(t_filler *pgm, int i, int j);
void			push_piece(t_filler *pgm);
void	algo_map00(t_filler *pgm);
void	algo_map01(t_filler *pgm);
void	algo_map02(t_filler *pgm);
void		get_map_id(t_filler *pgm);
#endif

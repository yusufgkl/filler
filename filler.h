#ifndef FILLER_H
# define FILLER_H

# include "libft/libft.h"
//# include "libft/get_next_line.h"

typedef struct	s_filler
{
	char	user;
	char	oppon;
	int		x_map;
	int		y_map;
	char	**map;
	int		x_token;
	int		y_token;
	char	**token;
	int		u_pos_x;
	int		u_pos_y;
	int		o_pos_x;
	int		o_pos_y;
	int		push_x;
	int		push_y;
	int		algo;
	int		ko;
	int		gameover;
}				t_filler;

void	info_map(t_filler *env);
void	info_user(t_filler *env);
int		take_map(t_filler *env);
int		take_token(t_filler *env, char *line);
int		algo(t_filler *env);
void	position(t_filler *env);
int		try_token(t_filler *env, int i, int j);
void	push_token(t_filler *env);
char	**ft_double_strnew(size_t x, size_t y);

#endif

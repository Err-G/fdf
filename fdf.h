/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:21:06 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/03/02 13:58:28 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft.h"
# include <mlx.h>

# include <math.h>

# include <X11/X.h>
# include <X11/keysym.h>

/* types */
typedef struct s_vec2	t_vec2;
typedef struct s_vec3	t_vec3;
typedef struct s_vec4	t_vec4;
typedef struct s_fdf	t_fdf;

/* definitions */
struct	s_vec2
{
	int	x;
	int	y;
};

struct	s_vec3
{
	int	x;
	int	y;
	int	z;
};

struct	s_vec4
{
	int	x;
	int	y;
	int	z;
	int	w;
};

struct	s_fdf
{
	void	*mlx;
	void	*win;
	t_vec2	win_size;
};

/* functions */

/* events.c */
int		event_quit(t_fdf *fdf);
int		event_keypress(int key, t_fdf *fdf);
int		event_keyrelease(int key, t_fdf *fdf);

/* draw.c */
void	draw_line(t_fdf *fdf, t_vec2 start, t_vec2 end, int color);

/* fdf.c */
int		fdf_draw(t_fdf *fdf);
void	fdf_init(t_fdf *fdf);

/* undr.c */
size_t	_tern(int cond, size_t t_val, size_t f_val);

/* point.c */
void	point_rotate(int *px, int *py, int angle);
void	point_translate(int *px, int *py, int x, int y);
void	point_scale(int *px, int *py, double scale);

#endif /* FDF_H */

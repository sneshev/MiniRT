#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_coord
{
	double x;
	double y;
	double z;
}	t_coord;

typedef struct s_ambient
{
	double	ratio;
	// t_color	color;
}	t_ambient;

typedef struct s_camera
{
	t_coord	pos;	// xyz position
	t_coord	orient;	// xyz orientation
	double	fov;	// field of view (0->180)
}	t_camera;

typedef struct s_light
{
	t_coord	pos;		// xyz position
	double	brightness; // 0.0 ->1.0
}	t_light;

typedef struct s_map
{
	t_ambient	ambient;
	t_camera	camera;
	t_light		light;
	//object *s
}	t_map;

#endif
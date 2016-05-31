#ifndef __PHYSICS_H__
#define __PHTSICS_H__

#include <allegro5/allegro.h>

struct Vec{
    double x;
    double y;
};

struct Movil{
    struct Vec a;
    struct Vec v;
    struct Vec p;
    int h;
    int w;
};

extern void update_physics(bool keys[4], struct Movil *navesita);
extern void init(struct Movil *navesita);

#endif

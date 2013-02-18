/*
Title:tursani.h
Abstract:Tursani a space shooter
ID:2224
Name:Marcus Bell
Date:12/12/2012
*/
#ifndef _TURSANI_H
#define _TURSANI_H

#include "allegro.h"
#include "mappyal.h"

//this must run at 640x480
#define MODE GFX_SAFE
#define WIDTH 640
#define HEIGHT 480

#define WHITE makecol(255,255,255)
#define GRAY makecol(60,60,60)
#define RED makecol(200,0,0)

#define MAX_ENEMIES 10
#define MAX_BULLETS 30
#define MAX_EXPLOSIONS 30
#define BOTTOM 23900 - HEIGHT //23900

//define the sprite structure
typedef struct SPRITE
{
    int dir, alive;
    int x,y;
    int width,height;
    int xspeed,yspeed;
    int xdelay,ydelay;
    int xcount,ycount;
    int curframe,maxframe,animdir;
    int framecount,framedelay;
}SPRITE;

//y offset in the game world.
int yoffset = BOTTOM;
int level = 1;
int newLevel = 0;
int gameover = 0;

//player variables
int firecount = 0;
int firedelay = 120;  // To adjust time gap between bullets.
int health = 5;
int score = 0;

//timer variables
volatile int counter;
volatile int ticks;
volatile int framerate;

//bitmaps and sprites
BITMAP *buffer;	
BITMAP *temp;
BITMAP *splashscreen;
BITMAP *gameoverscreen;
BITMAP *nextlevelscreen;
BITMAP *explosion_images[6];
SPRITE *explosions[MAX_EXPLOSIONS];
BITMAP *bigexp_images[7];
SPRITE *bigexp;
BITMAP *player_images[3];
SPRITE *player;
BITMAP *bullet_images[3];
SPRITE *bullets[MAX_BULLETS];
BITMAP *enemy_plane_images[3];
SPRITE *enemy_planes[MAX_ENEMIES];
BITMAP *enemy_plane2_images[3];
SPRITE *enemy_planes2[MAX_ENEMIES];
BITMAP *enemy_plane3_images[3];
SPRITE *enemy_planes3[MAX_ENEMIES];
BITMAP *progress, *bar;
BITMAP *bonus_shot_image;
SPRITE *bonus_shot;


//sound

SAMPLE *explodes;
SAMPLE *shooting;
SAMPLE *powerUp;
MIDI *music;

int panning = 128;
int pitch = 1000;
int volume = 128;
#endif
